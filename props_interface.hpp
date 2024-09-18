#ifndef PROPS_INTERFACE_HPP
#define PROPS_INTERFACE_HPP

// *******************************************************************
// The weight traits

template<typename>
struct weight_traits;

template <typename T>
using Weight = typename weight_traits<T>::type;

// *******************************************************************
// The index traits

template<typename>
struct key_traits;

template <typename T>
using Key = typename key_traits<T>::type;

#endif // PROPS_INTERFACE_HPP
