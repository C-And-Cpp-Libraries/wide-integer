///////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2018 -2019.                  //
//  Distributed under the Boost Software License,                //
//  Version 1.0. (See accompanying file LICENSE_1_0.txt          //
//  or copy at http://www.boost.org/LICENSE_1_0.txt)             //
///////////////////////////////////////////////////////////////////

#include <wide_integer/generic_template_uintwide_t.h>

bool wide_integer::example003_sqrt()
{
  using uint256_t = wide_integer::generic_template::uint256_t;

  const uint256_t a("0xF4DF741DE58BCB2F37F18372026EF9CBCFC456CB80AF54D53BDEED78410065DE");

  const uint256_t s = sqrt(a);

  const bool result_is_ok =
    (s == "0xFA5FE7853F1D4AD92BDF244179CA178B");

  return result_is_ok;
}

// Enable this if you would like to activate this main() as a standalone example.
#if 0

#include <iomanip>
#include <iostream>

int main()
{
  const bool result_is_ok = wide_integer::example003_sqrt();

  std::cout << "result_is_ok: " << std::boolalpha << result_is_ok << std::endl;
}

#endif
