///////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2018 -2019.                  //
//  Distributed under the Boost Software License,                //
//  Version 1.0. (See accompanying file LICENSE_1_0.txt          //
//  or copy at http://www.boost.org/LICENSE_1_0.txt)             //
///////////////////////////////////////////////////////////////////

#include <wide_integer/generic_template_uintwide_t.h>

bool wide_integer::example006_gcd()
{
  using uint256_t = wide_integer::generic_template::uint256_t;

  const uint256_t a("0xD2690CD26CD57A3C443993851A70D3B62F841573668DF7B229508371A0AEDE7F");
  const uint256_t b("0xFE719235CD0B1A314D4CA6940AEDC38BDF8E9484E68CE814EDAA17D87B0B4CC8");

  const uint256_t c = gcd(a, b);

  const bool result_is_ok = (std::uint32_t(c) == UINT32_C(12170749));

  return result_is_ok;
}

// Enable this if you would like to activate this main() as a standalone example.
#if 0

#include <iomanip>
#include <iostream>

int main()
{
  const bool result_is_ok = wide_integer::example006_gcd();

  std::cout << "result_is_ok: " << std::boolalpha << result_is_ok << std::endl;
}

#endif
