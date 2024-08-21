#ifndef PORT_H
#define PORT_H

#include "generic-field.h"
#include "string-array.h"
#include "string.h"

class Port : public GenericField {
  private:
    String port_rule;
    String port_name;
    short port_range_start;
    short port_range_end;

  public:
    Port();
    Port(const char *);
    Port(const String &);
    Port(const Port &);
    ~Port();

    bool right_port(const GenericString &field_port) const;

    bool match(const GenericString &packet) const;
};

#endif