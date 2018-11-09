#ifndef PRNG_H
#define PRNG_H

#include <stdint.h>
#include <x86intrin.h>

/* https://software.intel.com/en-us/node/523864
 _rdrand16_step(), _rdrand32_step(), _rdrand64_step()

Generate random numbers of 16/32/64 bit wide random integers.
These intrinsics are mapped to the hardware instruction RDRAND.

extern int _rdrand16_step(unsigned short *random_val);
extern int _rdrand32_step(unsigned int *random_val);
extern int _rdrand64_step(unsigned __int64 *random_val);

*/
/*
class PRNG
{
    public:
        inline uint64_t rand64(){
            _rdrand64_step(&r64);
            return r64;
        }
        //template<typename T> T rand() { return T(rand64()); }

    private:
        uint64_t r64;
};
*/

class PRNG {

  uint64_t s;
  uint64_t rand64() {
    s ^= s >> 12, s ^= s << 25, s ^= s >> 27;
    return s * 2685821657736338717LL;
  }

public:
  PRNG(uint64_t seed) : s(seed) {}
  template<typename T> T rand() { return T(rand64()); }
};

#endif // PRNG_H
