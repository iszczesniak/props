#ifndef PROPS_HPP
#define PROPS_HPP

#include <iostream>

// -------------------------------------------------------------------
// weight
//
// Why not lenght or cost?  We have a weighted graph, Cormen uses
// weight, and so does the Boost Graph Library.  Stay with weight.
// -------------------------------------------------------------------

template <typename Weight>
struct weight
{
  using weight_type = Weight;
  weight_type m_weight;

  weight(const weight_type &weight = {}): m_weight(weight)
  {
  }

  constexpr auto operator <=> (const weight &) const = default;
};

// The non-const getter.
template <typename Weight>
constexpr auto &
get_weight(weight<Weight> &a)
{
  return a.m_weight;
}

// The const getter.
template <typename Weight>
constexpr const auto &
get_weight(const weight<Weight> &a)
{
  return a.m_weight;
}

template <typename Weight>
std::ostream &
operator << (std::ostream &os, const weight<Weight> &w)
{
  os << "weight = " << w.m_weight;

  return os;
}

// -------------------------------------------------------------------
// resources
// -------------------------------------------------------------------

template <typename Resources>
struct resources
{
  Resources m_resources;

  resources(const Resources &resources = {}): m_resources(resources)
  {
  }

  constexpr auto operator <=> (const resources &) const = default;
};

// The non-const getter.
template <typename Resources>
auto &
get_resources(resources<Resources> &a)
{
  return a.m_resources;
}

// The const getter.
template <typename Resources>
const auto &
get_resources(const resources<Resources> &a)
{
  return a.m_resources;
}

template <typename Resources>
std::ostream &
operator << (std::ostream &os, const resources<Resources> &w)
{
  os << "resources = " << w.m_resources;

  return os;
}

// -------------------------------------------------------------------
// key
// -------------------------------------------------------------------

template <typename Key>
struct key
{
  using key_type = Key;
  key_type m_key;

  key(const key_type &key = {}): m_key(key)
  {
  }

  constexpr auto operator <=> (const key &) const = default;
};

// The non-const getter.
template <typename Key>
auto &
get_key(key<Key> &a)
{
  return a.m_key;
}

// The const getter.
template <typename Key>
const auto &
get_key(const key<Key> &a)
{
  return a.m_key;
}

template <typename Key>
std::ostream &
operator << (std::ostream &os, const key<Key> &w)
{
  os << "key = " << w.m_key;

  return os;
}

// -------------------------------------------------------------------
// name
// -------------------------------------------------------------------

template <typename Name>
struct name
{
  Name m_name;

  name(const Name &name = {}): m_name(name)
  {
  }
};

// The non-const getter.
template <typename Name>
auto &
get_name(name<Name> &a)
{
  return a.m_name;
}

// The const getter.
template <typename Name>
const auto &
get_name(const name<Name> &a)
{
  return a.m_name;
}

template <typename Name>
std::ostream &
operator << (std::ostream &os, const name<Name> &w)
{
  os << "name = " << w.m_name;

  return os;
}

#endif // PROPS_HPP
