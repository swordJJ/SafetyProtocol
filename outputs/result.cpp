/******************************
  Program "result.m" compiled by "Caching Murphi Release 5.4.9.1"

  Murphi Last Compiled date: "Oct 20 2020"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.4.9.1"
#define MURPHI_DATE "Oct 20 2020"
#define PROTOCOL_NAME "result"
#define BITS_IN_WORLD 48696
#define ALIGN
#define HASHC

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_indexType: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_indexType& val) { return mu__byte::operator=((int) val); };
  mu_1_indexType (const char *name, int os): mu__byte(0, 100, 7, name, os) {};
  mu_1_indexType (void): mu__byte(0, 100, 7) {};
  mu_1_indexType (int val): mu__byte(0, 100, 7, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_indexType mu_1_indexType_undefined_var;

class mu_1_roleANums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleANums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleANums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleANums (void): mu__byte(1, 1, 1) {};
  mu_1_roleANums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_roleANums mu_1_roleANums_undefined_var;

class mu_1_roleBNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleBNums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleBNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleBNums (void): mu__byte(1, 1, 1) {};
  mu_1_roleBNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_roleBNums mu_1_roleBNums_undefined_var;

class mu_1_msgLen: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_msgLen& val) { return mu__byte::operator=((int) val); };
  mu_1_msgLen (const char *name, int os): mu__byte(0, 10, 4, name, os) {};
  mu_1_msgLen (void): mu__byte(0, 10, 4) {};
  mu_1_msgLen (int val): mu__byte(0, 10, 4, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_msgLen mu_1_msgLen_undefined_var;

class mu_1_chanNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_chanNums& val) { return mu__byte::operator=((int) val); };
  mu_1_chanNums (const char *name, int os): mu__byte(0, 18, 5, name, os) {};
  mu_1_chanNums (void): mu__byte(0, 18, 5) {};
  mu_1_chanNums (int val): mu__byte(0, 18, 5, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_chanNums mu_1_chanNums_undefined_var;

class mu_1_invokeNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_invokeNums& val) { return mu__byte::operator=((int) val); };
  mu_1_invokeNums (const char *name, int os): mu__byte(0, 10, 4, name, os) {};
  mu_1_invokeNums (void): mu__byte(0, 10, 4) {};
  mu_1_invokeNums (int val): mu__byte(0, 10, 4, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_invokeNums mu_1_invokeNums_undefined_var;

class mu_1_AgentType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_AgentType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_AgentType& val)
  {
    if (val.defined())
      return ( s << mu_1_AgentType::values[ int(val) - 1] );
    else return ( s << "Undefined" );
  };

  mu_1_AgentType (const char *name, int os): mu__byte(1, 4, 3, name, os) {};
  mu_1_AgentType (void): mu__byte(1, 4, 3) {};
  mu_1_AgentType (int val): mu__byte(1, 4, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -1]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -1] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_AgentType::values[] = {"anyAgent","Intruder","Alice","Bob",NULL };

/*** end of enum declaration ***/
mu_1_AgentType mu_1_AgentType_undefined_var;

class mu_1_NonceType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_NonceType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_NonceType& val)
  {
    if (val.defined())
      return ( s << mu_1_NonceType::values[ int(val) - 5] );
    else return ( s << "Undefined" );
  };

  mu_1_NonceType (const char *name, int os): mu__byte(5, 9, 3, name, os) {};
  mu_1_NonceType (void): mu__byte(5, 9, 3) {};
  mu_1_NonceType (int val): mu__byte(5, 9, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -5]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -5] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_NonceType::values[] = {"anyNonce","Na","Nb","Nb1","kab",NULL };

/*** end of enum declaration ***/
mu_1_NonceType mu_1_NonceType_undefined_var;

class mu_1_ConstType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_ConstType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_ConstType& val)
  {
    if (val.defined())
      return ( s << mu_1_ConstType::values[ int(val) - 10] );
    else return ( s << "Undefined" );
  };

  mu_1_ConstType (const char *name, int os): mu__byte(10, 10, 1, name, os) {};
  mu_1_ConstType (void): mu__byte(10, 10, 1) {};
  mu_1_ConstType (int val): mu__byte(10, 10, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -10]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -10] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_ConstType::values[] = {"anyNumber",NULL };

/*** end of enum declaration ***/
mu_1_ConstType mu_1_ConstType_undefined_var;

class mu_1_MsgType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_MsgType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_MsgType& val)
  {
    if (val.defined())
      return ( s << mu_1_MsgType::values[ int(val) - 11] );
    else return ( s << "Undefined" );
  };

  mu_1_MsgType (const char *name, int os): mu__byte(11, 23, 4, name, os) {};
  mu_1_MsgType (void): mu__byte(11, 23, 4) {};
  mu_1_MsgType (int val): mu__byte(11, 23, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -11]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -11] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_MsgType::values[] = {"null","agent","nonce","key","aenc","senc","sign","concat","hash","tmp","mod","e","number",NULL };

/*** end of enum declaration ***/
mu_1_MsgType mu_1_MsgType_undefined_var;

class mu_1_EncryptType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_EncryptType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_EncryptType& val)
  {
    if (val.defined())
      return ( s << mu_1_EncryptType::values[ int(val) - 24] );
    else return ( s << "Undefined" );
  };

  mu_1_EncryptType (const char *name, int os): mu__byte(24, 27, 3, name, os) {};
  mu_1_EncryptType (void): mu__byte(24, 27, 3) {};
  mu_1_EncryptType (int val): mu__byte(24, 27, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -24]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -24] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_EncryptType::values[] = {"PK","SK","Symk","MsgK",NULL };

/*** end of enum declaration ***/
mu_1_EncryptType mu_1_EncryptType_undefined_var;

class mu_1_KeyType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_EncryptType mu_encType;
  mu_1_AgentType mu_ag;
  mu_1_AgentType mu_ag1;
  mu_1_AgentType mu_ag2;
  mu_1_indexType mu_m;
  mu_1_KeyType ( const char *n, int os ) { set_self(n,os); };
  mu_1_KeyType ( void ) {};

  virtual ~mu_1_KeyType(); 
friend int CompareWeight(mu_1_KeyType& a, mu_1_KeyType& b)
  {
    int w;
    w = CompareWeight(a.mu_encType, b.mu_encType);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag1, b.mu_ag1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag2, b.mu_ag2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_m, b.mu_m);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_KeyType& a, mu_1_KeyType& b)
  {
    int w;
    w = Compare(a.mu_encType, b.mu_encType);
    if (w!=0) return w;
    w = Compare(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = Compare(a.mu_ag1, b.mu_ag1);
    if (w!=0) return w;
    w = Compare(a.mu_ag2, b.mu_ag2);
    if (w!=0) return w;
    w = Compare(a.mu_m, b.mu_m);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_encType.MultisetSort();
    mu_ag.MultisetSort();
    mu_ag1.MultisetSort();
    mu_ag2.MultisetSort();
    mu_m.MultisetSort();
  }
  void print_statistic()
  {
    mu_encType.print_statistic();
    mu_ag.print_statistic();
    mu_ag1.print_statistic();
    mu_ag2.print_statistic();
    mu_m.print_statistic();
  }
  void clear() {
    mu_encType.clear();
    mu_ag.clear();
    mu_ag1.clear();
    mu_ag2.clear();
    mu_m.clear();
 };
  void undefine() {
    mu_encType.undefine();
    mu_ag.undefine();
    mu_ag1.undefine();
    mu_ag2.undefine();
    mu_m.undefine();
 };
  void reset() {
    mu_encType.reset();
    mu_ag.reset();
    mu_ag1.reset();
    mu_ag2.reset();
    mu_m.reset();
 };
  void print() {
    mu_encType.print();
    mu_ag.print();
    mu_ag1.print();
    mu_ag2.print();
    mu_m.print();
  };
  void print_diff(state *prevstate) {
    mu_encType.print_diff(prevstate);
    mu_ag.print_diff(prevstate);
    mu_ag1.print_diff(prevstate);
    mu_ag2.print_diff(prevstate);
    mu_m.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_encType.to_state(thestate);
    mu_ag.to_state(thestate);
    mu_ag1.to_state(thestate);
    mu_ag2.to_state(thestate);
    mu_m.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_KeyType& operator= (const mu_1_KeyType& from) {
    mu_encType.value(from.mu_encType.value());
    mu_ag.value(from.mu_ag.value());
    mu_ag1.value(from.mu_ag1.value());
    mu_ag2.value(from.mu_ag2.value());
    mu_m.value(from.mu_m.value());
    return *this;
  };
};

  void mu_1_KeyType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_KeyType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_KeyType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_encType.set_self_2(name, ".encType", os + 0 ); else mu_encType.set_self_2(NULL, NULL, 0);
  if (name) mu_ag.set_self_2(name, ".ag", os + 8 ); else mu_ag.set_self_2(NULL, NULL, 0);
  if (name) mu_ag1.set_self_2(name, ".ag1", os + 16 ); else mu_ag1.set_self_2(NULL, NULL, 0);
  if (name) mu_ag2.set_self_2(name, ".ag2", os + 24 ); else mu_ag2.set_self_2(NULL, NULL, 0);
  if (name) mu_m.set_self_2(name, ".m", os + 32 ); else mu_m.set_self_2(NULL, NULL, 0);
}

mu_1_KeyType::~mu_1_KeyType()
{
}

/*** end record declaration ***/
mu_1_KeyType mu_1_KeyType_undefined_var;

class mu_1_AStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_AStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_AStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_AStatus::values[ int(val) - 28] );
    else return ( s << "Undefined" );
  };

  mu_1_AStatus (const char *name, int os): mu__byte(28, 31, 3, name, os) {};
  mu_1_AStatus (void): mu__byte(28, 31, 3) {};
  mu_1_AStatus (int val): mu__byte(28, 31, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -28]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -28] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_AStatus::values[] = {"A1","A2","A3","A4",NULL };

/*** end of enum declaration ***/
mu_1_AStatus mu_1_AStatus_undefined_var;

class mu_1_BStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_BStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_BStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_BStatus::values[ int(val) - 32] );
    else return ( s << "Undefined" );
  };

  mu_1_BStatus (const char *name, int os): mu__byte(32, 35, 3, name, os) {};
  mu_1_BStatus (void): mu__byte(32, 35, 3) {};
  mu_1_BStatus (int val): mu__byte(32, 35, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -32]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -32] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_BStatus::values[] = {"B1","B2","B3","B4",NULL };

/*** end of enum declaration ***/
mu_1_BStatus mu_1_BStatus_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_indexType array[ 11 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_indexType& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 10 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
    for (int i = 0; i < 11; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 11; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 11; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_0::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_0::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_0::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 11; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1_Message
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_MsgType mu_msgType;
  mu_1_AgentType mu_ag;
  mu_1_NonceType mu_noncePart;
  mu_1_ConstType mu_constPart;
  mu_1_indexType mu_tmpPart;
  mu_1_KeyType mu_k;
  mu_1_indexType mu_modMsg1;
  mu_1_indexType mu_modMsg2;
  mu_1_indexType mu_hashMsg;
  mu_1_indexType mu_expMsg1;
  mu_1_indexType mu_expMsg2;
  mu_1_indexType mu_signMsg;
  mu_1_indexType mu_signKey;
  mu_1_indexType mu_aencMsg;
  mu_1_indexType mu_aencKey;
  mu_1_indexType mu_sencMsg;
  mu_1_indexType mu_sencKey;
  mu_1__type_0 mu_concatPart;
  mu_1_indexType mu_length;
  mu_1_Message ( const char *n, int os ) { set_self(n,os); };
  mu_1_Message ( void ) {};

  virtual ~mu_1_Message(); 
friend int CompareWeight(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = CompareWeight(a.mu_msgType, b.mu_msgType);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = CompareWeight(a.mu_noncePart, b.mu_noncePart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_constPart, b.mu_constPart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_tmpPart, b.mu_tmpPart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_k, b.mu_k);
    if (w!=0) return w;
    w = CompareWeight(a.mu_modMsg1, b.mu_modMsg1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_modMsg2, b.mu_modMsg2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_hashMsg, b.mu_hashMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_expMsg1, b.mu_expMsg1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_expMsg2, b.mu_expMsg2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_signMsg, b.mu_signMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_signKey, b.mu_signKey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_aencMsg, b.mu_aencMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_aencKey, b.mu_aencKey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sencMsg, b.mu_sencMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sencKey, b.mu_sencKey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_concatPart, b.mu_concatPart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_length, b.mu_length);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = Compare(a.mu_msgType, b.mu_msgType);
    if (w!=0) return w;
    w = Compare(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = Compare(a.mu_noncePart, b.mu_noncePart);
    if (w!=0) return w;
    w = Compare(a.mu_constPart, b.mu_constPart);
    if (w!=0) return w;
    w = Compare(a.mu_tmpPart, b.mu_tmpPart);
    if (w!=0) return w;
    w = Compare(a.mu_k, b.mu_k);
    if (w!=0) return w;
    w = Compare(a.mu_modMsg1, b.mu_modMsg1);
    if (w!=0) return w;
    w = Compare(a.mu_modMsg2, b.mu_modMsg2);
    if (w!=0) return w;
    w = Compare(a.mu_hashMsg, b.mu_hashMsg);
    if (w!=0) return w;
    w = Compare(a.mu_expMsg1, b.mu_expMsg1);
    if (w!=0) return w;
    w = Compare(a.mu_expMsg2, b.mu_expMsg2);
    if (w!=0) return w;
    w = Compare(a.mu_signMsg, b.mu_signMsg);
    if (w!=0) return w;
    w = Compare(a.mu_signKey, b.mu_signKey);
    if (w!=0) return w;
    w = Compare(a.mu_aencMsg, b.mu_aencMsg);
    if (w!=0) return w;
    w = Compare(a.mu_aencKey, b.mu_aencKey);
    if (w!=0) return w;
    w = Compare(a.mu_sencMsg, b.mu_sencMsg);
    if (w!=0) return w;
    w = Compare(a.mu_sencKey, b.mu_sencKey);
    if (w!=0) return w;
    w = Compare(a.mu_concatPart, b.mu_concatPart);
    if (w!=0) return w;
    w = Compare(a.mu_length, b.mu_length);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_msgType.MultisetSort();
    mu_ag.MultisetSort();
    mu_noncePart.MultisetSort();
    mu_constPart.MultisetSort();
    mu_tmpPart.MultisetSort();
    mu_k.MultisetSort();
    mu_modMsg1.MultisetSort();
    mu_modMsg2.MultisetSort();
    mu_hashMsg.MultisetSort();
    mu_expMsg1.MultisetSort();
    mu_expMsg2.MultisetSort();
    mu_signMsg.MultisetSort();
    mu_signKey.MultisetSort();
    mu_aencMsg.MultisetSort();
    mu_aencKey.MultisetSort();
    mu_sencMsg.MultisetSort();
    mu_sencKey.MultisetSort();
    mu_concatPart.MultisetSort();
    mu_length.MultisetSort();
  }
  void print_statistic()
  {
    mu_msgType.print_statistic();
    mu_ag.print_statistic();
    mu_noncePart.print_statistic();
    mu_constPart.print_statistic();
    mu_tmpPart.print_statistic();
    mu_k.print_statistic();
    mu_modMsg1.print_statistic();
    mu_modMsg2.print_statistic();
    mu_hashMsg.print_statistic();
    mu_expMsg1.print_statistic();
    mu_expMsg2.print_statistic();
    mu_signMsg.print_statistic();
    mu_signKey.print_statistic();
    mu_aencMsg.print_statistic();
    mu_aencKey.print_statistic();
    mu_sencMsg.print_statistic();
    mu_sencKey.print_statistic();
    mu_concatPart.print_statistic();
    mu_length.print_statistic();
  }
  void clear() {
    mu_msgType.clear();
    mu_ag.clear();
    mu_noncePart.clear();
    mu_constPart.clear();
    mu_tmpPart.clear();
    mu_k.clear();
    mu_modMsg1.clear();
    mu_modMsg2.clear();
    mu_hashMsg.clear();
    mu_expMsg1.clear();
    mu_expMsg2.clear();
    mu_signMsg.clear();
    mu_signKey.clear();
    mu_aencMsg.clear();
    mu_aencKey.clear();
    mu_sencMsg.clear();
    mu_sencKey.clear();
    mu_concatPart.clear();
    mu_length.clear();
 };
  void undefine() {
    mu_msgType.undefine();
    mu_ag.undefine();
    mu_noncePart.undefine();
    mu_constPart.undefine();
    mu_tmpPart.undefine();
    mu_k.undefine();
    mu_modMsg1.undefine();
    mu_modMsg2.undefine();
    mu_hashMsg.undefine();
    mu_expMsg1.undefine();
    mu_expMsg2.undefine();
    mu_signMsg.undefine();
    mu_signKey.undefine();
    mu_aencMsg.undefine();
    mu_aencKey.undefine();
    mu_sencMsg.undefine();
    mu_sencKey.undefine();
    mu_concatPart.undefine();
    mu_length.undefine();
 };
  void reset() {
    mu_msgType.reset();
    mu_ag.reset();
    mu_noncePart.reset();
    mu_constPart.reset();
    mu_tmpPart.reset();
    mu_k.reset();
    mu_modMsg1.reset();
    mu_modMsg2.reset();
    mu_hashMsg.reset();
    mu_expMsg1.reset();
    mu_expMsg2.reset();
    mu_signMsg.reset();
    mu_signKey.reset();
    mu_aencMsg.reset();
    mu_aencKey.reset();
    mu_sencMsg.reset();
    mu_sencKey.reset();
    mu_concatPart.reset();
    mu_length.reset();
 };
  void print() {
    mu_msgType.print();
    mu_ag.print();
    mu_noncePart.print();
    mu_constPart.print();
    mu_tmpPart.print();
    mu_k.print();
    mu_modMsg1.print();
    mu_modMsg2.print();
    mu_hashMsg.print();
    mu_expMsg1.print();
    mu_expMsg2.print();
    mu_signMsg.print();
    mu_signKey.print();
    mu_aencMsg.print();
    mu_aencKey.print();
    mu_sencMsg.print();
    mu_sencKey.print();
    mu_concatPart.print();
    mu_length.print();
  };
  void print_diff(state *prevstate) {
    mu_msgType.print_diff(prevstate);
    mu_ag.print_diff(prevstate);
    mu_noncePart.print_diff(prevstate);
    mu_constPart.print_diff(prevstate);
    mu_tmpPart.print_diff(prevstate);
    mu_k.print_diff(prevstate);
    mu_modMsg1.print_diff(prevstate);
    mu_modMsg2.print_diff(prevstate);
    mu_hashMsg.print_diff(prevstate);
    mu_expMsg1.print_diff(prevstate);
    mu_expMsg2.print_diff(prevstate);
    mu_signMsg.print_diff(prevstate);
    mu_signKey.print_diff(prevstate);
    mu_aencMsg.print_diff(prevstate);
    mu_aencKey.print_diff(prevstate);
    mu_sencMsg.print_diff(prevstate);
    mu_sencKey.print_diff(prevstate);
    mu_concatPart.print_diff(prevstate);
    mu_length.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_msgType.to_state(thestate);
    mu_ag.to_state(thestate);
    mu_noncePart.to_state(thestate);
    mu_constPart.to_state(thestate);
    mu_tmpPart.to_state(thestate);
    mu_k.to_state(thestate);
    mu_modMsg1.to_state(thestate);
    mu_modMsg2.to_state(thestate);
    mu_hashMsg.to_state(thestate);
    mu_expMsg1.to_state(thestate);
    mu_expMsg2.to_state(thestate);
    mu_signMsg.to_state(thestate);
    mu_signKey.to_state(thestate);
    mu_aencMsg.to_state(thestate);
    mu_aencKey.to_state(thestate);
    mu_sencMsg.to_state(thestate);
    mu_sencKey.to_state(thestate);
    mu_concatPart.to_state(thestate);
    mu_length.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Message& operator= (const mu_1_Message& from) {
    mu_msgType.value(from.mu_msgType.value());
    mu_ag.value(from.mu_ag.value());
    mu_noncePart.value(from.mu_noncePart.value());
    mu_constPart.value(from.mu_constPart.value());
    mu_tmpPart.value(from.mu_tmpPart.value());
    mu_k = from.mu_k;
    mu_modMsg1.value(from.mu_modMsg1.value());
    mu_modMsg2.value(from.mu_modMsg2.value());
    mu_hashMsg.value(from.mu_hashMsg.value());
    mu_expMsg1.value(from.mu_expMsg1.value());
    mu_expMsg2.value(from.mu_expMsg2.value());
    mu_signMsg.value(from.mu_signMsg.value());
    mu_signKey.value(from.mu_signKey.value());
    mu_aencMsg.value(from.mu_aencMsg.value());
    mu_aencKey.value(from.mu_aencKey.value());
    mu_sencMsg.value(from.mu_sencMsg.value());
    mu_sencKey.value(from.mu_sencKey.value());
    mu_concatPart = from.mu_concatPart;
    mu_length.value(from.mu_length.value());
    return *this;
  };
};

  void mu_1_Message::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Message::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Message::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_msgType.set_self_2(name, ".msgType", os + 0 ); else mu_msgType.set_self_2(NULL, NULL, 0);
  if (name) mu_ag.set_self_2(name, ".ag", os + 8 ); else mu_ag.set_self_2(NULL, NULL, 0);
  if (name) mu_noncePart.set_self_2(name, ".noncePart", os + 16 ); else mu_noncePart.set_self_2(NULL, NULL, 0);
  if (name) mu_constPart.set_self_2(name, ".constPart", os + 24 ); else mu_constPart.set_self_2(NULL, NULL, 0);
  if (name) mu_tmpPart.set_self_2(name, ".tmpPart", os + 32 ); else mu_tmpPart.set_self_2(NULL, NULL, 0);
  if (name) mu_k.set_self_2(name, ".k", os + 40 ); else mu_k.set_self_2(NULL, NULL, 0);
  if (name) mu_modMsg1.set_self_2(name, ".modMsg1", os + 80 ); else mu_modMsg1.set_self_2(NULL, NULL, 0);
  if (name) mu_modMsg2.set_self_2(name, ".modMsg2", os + 88 ); else mu_modMsg2.set_self_2(NULL, NULL, 0);
  if (name) mu_hashMsg.set_self_2(name, ".hashMsg", os + 96 ); else mu_hashMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_expMsg1.set_self_2(name, ".expMsg1", os + 104 ); else mu_expMsg1.set_self_2(NULL, NULL, 0);
  if (name) mu_expMsg2.set_self_2(name, ".expMsg2", os + 112 ); else mu_expMsg2.set_self_2(NULL, NULL, 0);
  if (name) mu_signMsg.set_self_2(name, ".signMsg", os + 120 ); else mu_signMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_signKey.set_self_2(name, ".signKey", os + 128 ); else mu_signKey.set_self_2(NULL, NULL, 0);
  if (name) mu_aencMsg.set_self_2(name, ".aencMsg", os + 136 ); else mu_aencMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_aencKey.set_self_2(name, ".aencKey", os + 144 ); else mu_aencKey.set_self_2(NULL, NULL, 0);
  if (name) mu_sencMsg.set_self_2(name, ".sencMsg", os + 152 ); else mu_sencMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_sencKey.set_self_2(name, ".sencKey", os + 160 ); else mu_sencKey.set_self_2(NULL, NULL, 0);
  if (name) mu_concatPart.set_self_2(name, ".concatPart", os + 168 ); else mu_concatPart.set_self_2(NULL, NULL, 0);
  if (name) mu_length.set_self_2(name, ".length", os + 256 ); else mu_length.set_self_2(NULL, NULL, 0);
}

mu_1_Message::~mu_1_Message()
{
}

/*** end record declaration ***/
mu_1_Message mu_1_Message_undefined_var;

class mu_1_Channel
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_Message mu_msg;
  mu_1_AgentType mu_sender;
  mu_1_AgentType mu_receiver;
  mu_0_boolean mu_empty;
  mu_1_Channel ( const char *n, int os ) { set_self(n,os); };
  mu_1_Channel ( void ) {};

  virtual ~mu_1_Channel(); 
friend int CompareWeight(mu_1_Channel& a, mu_1_Channel& b)
  {
    int w;
    w = CompareWeight(a.mu_msg, b.mu_msg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sender, b.mu_sender);
    if (w!=0) return w;
    w = CompareWeight(a.mu_receiver, b.mu_receiver);
    if (w!=0) return w;
    w = CompareWeight(a.mu_empty, b.mu_empty);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Channel& a, mu_1_Channel& b)
  {
    int w;
    w = Compare(a.mu_msg, b.mu_msg);
    if (w!=0) return w;
    w = Compare(a.mu_sender, b.mu_sender);
    if (w!=0) return w;
    w = Compare(a.mu_receiver, b.mu_receiver);
    if (w!=0) return w;
    w = Compare(a.mu_empty, b.mu_empty);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_msg.MultisetSort();
    mu_sender.MultisetSort();
    mu_receiver.MultisetSort();
    mu_empty.MultisetSort();
  }
  void print_statistic()
  {
    mu_msg.print_statistic();
    mu_sender.print_statistic();
    mu_receiver.print_statistic();
    mu_empty.print_statistic();
  }
  void clear() {
    mu_msg.clear();
    mu_sender.clear();
    mu_receiver.clear();
    mu_empty.clear();
 };
  void undefine() {
    mu_msg.undefine();
    mu_sender.undefine();
    mu_receiver.undefine();
    mu_empty.undefine();
 };
  void reset() {
    mu_msg.reset();
    mu_sender.reset();
    mu_receiver.reset();
    mu_empty.reset();
 };
  void print() {
    mu_msg.print();
    mu_sender.print();
    mu_receiver.print();
    mu_empty.print();
  };
  void print_diff(state *prevstate) {
    mu_msg.print_diff(prevstate);
    mu_sender.print_diff(prevstate);
    mu_receiver.print_diff(prevstate);
    mu_empty.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_msg.to_state(thestate);
    mu_sender.to_state(thestate);
    mu_receiver.to_state(thestate);
    mu_empty.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Channel& operator= (const mu_1_Channel& from) {
    mu_msg = from.mu_msg;
    mu_sender.value(from.mu_sender.value());
    mu_receiver.value(from.mu_receiver.value());
    mu_empty.value(from.mu_empty.value());
    return *this;
  };
};

  void mu_1_Channel::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Channel::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Channel::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_msg.set_self_2(name, ".msg", os + 0 ); else mu_msg.set_self_2(NULL, NULL, 0);
  if (name) mu_sender.set_self_2(name, ".sender", os + 264 ); else mu_sender.set_self_2(NULL, NULL, 0);
  if (name) mu_receiver.set_self_2(name, ".receiver", os + 272 ); else mu_receiver.set_self_2(NULL, NULL, 0);
  if (name) mu_empty.set_self_2(name, ".empty", os + 280 ); else mu_empty.set_self_2(NULL, NULL, 0);
}

mu_1_Channel::~mu_1_Channel()
{
}

/*** end record declaration ***/
mu_1_Channel mu_1_Channel_undefined_var;

class mu_1_RoleA
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_Na;
  mu_1_NonceType mu_Nb;
  mu_1_NonceType mu_Nb1;
  mu_1_NonceType mu_kab;
  mu_1_AgentType mu_A;
  mu_1_AgentType mu_B;
  mu_1_NonceType mu_locNa;
  mu_1_NonceType mu_locNb;
  mu_1_NonceType mu_locNb1;
  mu_1_NonceType mu_lockab;
  mu_1_AgentType mu_locA;
  mu_1_AgentType mu_locB;
  mu_1_AStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleA ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleA ( void ) {};

  virtual ~mu_1_RoleA(); 
friend int CompareWeight(mu_1_RoleA& a, mu_1_RoleA& b)
  {
    int w;
    w = CompareWeight(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Nb1, b.mu_Nb1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_kab, b.mu_kab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNb1, b.mu_locNb1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_lockab, b.mu_lockab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleA& a, mu_1_RoleA& b)
  {
    int w;
    w = Compare(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = Compare(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = Compare(a.mu_Nb1, b.mu_Nb1);
    if (w!=0) return w;
    w = Compare(a.mu_kab, b.mu_kab);
    if (w!=0) return w;
    w = Compare(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = Compare(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = Compare(a.mu_locNb1, b.mu_locNb1);
    if (w!=0) return w;
    w = Compare(a.mu_lockab, b.mu_lockab);
    if (w!=0) return w;
    w = Compare(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = Compare(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = Compare(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_Na.MultisetSort();
    mu_Nb.MultisetSort();
    mu_Nb1.MultisetSort();
    mu_kab.MultisetSort();
    mu_A.MultisetSort();
    mu_B.MultisetSort();
    mu_locNa.MultisetSort();
    mu_locNb.MultisetSort();
    mu_locNb1.MultisetSort();
    mu_lockab.MultisetSort();
    mu_locA.MultisetSort();
    mu_locB.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_Na.print_statistic();
    mu_Nb.print_statistic();
    mu_Nb1.print_statistic();
    mu_kab.print_statistic();
    mu_A.print_statistic();
    mu_B.print_statistic();
    mu_locNa.print_statistic();
    mu_locNb.print_statistic();
    mu_locNb1.print_statistic();
    mu_lockab.print_statistic();
    mu_locA.print_statistic();
    mu_locB.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_Na.clear();
    mu_Nb.clear();
    mu_Nb1.clear();
    mu_kab.clear();
    mu_A.clear();
    mu_B.clear();
    mu_locNa.clear();
    mu_locNb.clear();
    mu_locNb1.clear();
    mu_lockab.clear();
    mu_locA.clear();
    mu_locB.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_Na.undefine();
    mu_Nb.undefine();
    mu_Nb1.undefine();
    mu_kab.undefine();
    mu_A.undefine();
    mu_B.undefine();
    mu_locNa.undefine();
    mu_locNb.undefine();
    mu_locNb1.undefine();
    mu_lockab.undefine();
    mu_locA.undefine();
    mu_locB.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_Na.reset();
    mu_Nb.reset();
    mu_Nb1.reset();
    mu_kab.reset();
    mu_A.reset();
    mu_B.reset();
    mu_locNa.reset();
    mu_locNb.reset();
    mu_locNb1.reset();
    mu_lockab.reset();
    mu_locA.reset();
    mu_locB.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_Na.print();
    mu_Nb.print();
    mu_Nb1.print();
    mu_kab.print();
    mu_A.print();
    mu_B.print();
    mu_locNa.print();
    mu_locNb.print();
    mu_locNb1.print();
    mu_lockab.print();
    mu_locA.print();
    mu_locB.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_Na.print_diff(prevstate);
    mu_Nb.print_diff(prevstate);
    mu_Nb1.print_diff(prevstate);
    mu_kab.print_diff(prevstate);
    mu_A.print_diff(prevstate);
    mu_B.print_diff(prevstate);
    mu_locNa.print_diff(prevstate);
    mu_locNb.print_diff(prevstate);
    mu_locNb1.print_diff(prevstate);
    mu_lockab.print_diff(prevstate);
    mu_locA.print_diff(prevstate);
    mu_locB.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Na.to_state(thestate);
    mu_Nb.to_state(thestate);
    mu_Nb1.to_state(thestate);
    mu_kab.to_state(thestate);
    mu_A.to_state(thestate);
    mu_B.to_state(thestate);
    mu_locNa.to_state(thestate);
    mu_locNb.to_state(thestate);
    mu_locNb1.to_state(thestate);
    mu_lockab.to_state(thestate);
    mu_locA.to_state(thestate);
    mu_locB.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleA& operator= (const mu_1_RoleA& from) {
    mu_Na.value(from.mu_Na.value());
    mu_Nb.value(from.mu_Nb.value());
    mu_Nb1.value(from.mu_Nb1.value());
    mu_kab.value(from.mu_kab.value());
    mu_A.value(from.mu_A.value());
    mu_B.value(from.mu_B.value());
    mu_locNa.value(from.mu_locNa.value());
    mu_locNb.value(from.mu_locNb.value());
    mu_locNb1.value(from.mu_locNb1.value());
    mu_lockab.value(from.mu_lockab.value());
    mu_locA.value(from.mu_locA.value());
    mu_locB.value(from.mu_locB.value());
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleA::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleA::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleA::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Na.set_self_2(name, ".Na", os + 0 ); else mu_Na.set_self_2(NULL, NULL, 0);
  if (name) mu_Nb.set_self_2(name, ".Nb", os + 8 ); else mu_Nb.set_self_2(NULL, NULL, 0);
  if (name) mu_Nb1.set_self_2(name, ".Nb1", os + 16 ); else mu_Nb1.set_self_2(NULL, NULL, 0);
  if (name) mu_kab.set_self_2(name, ".kab", os + 24 ); else mu_kab.set_self_2(NULL, NULL, 0);
  if (name) mu_A.set_self_2(name, ".A", os + 32 ); else mu_A.set_self_2(NULL, NULL, 0);
  if (name) mu_B.set_self_2(name, ".B", os + 40 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa.set_self_2(name, ".locNa", os + 48 ); else mu_locNa.set_self_2(NULL, NULL, 0);
  if (name) mu_locNb.set_self_2(name, ".locNb", os + 56 ); else mu_locNb.set_self_2(NULL, NULL, 0);
  if (name) mu_locNb1.set_self_2(name, ".locNb1", os + 64 ); else mu_locNb1.set_self_2(NULL, NULL, 0);
  if (name) mu_lockab.set_self_2(name, ".lockab", os + 72 ); else mu_lockab.set_self_2(NULL, NULL, 0);
  if (name) mu_locA.set_self_2(name, ".locA", os + 80 ); else mu_locA.set_self_2(NULL, NULL, 0);
  if (name) mu_locB.set_self_2(name, ".locB", os + 88 ); else mu_locB.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 96 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 104 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleA::~mu_1_RoleA()
{
}

/*** end record declaration ***/
mu_1_RoleA mu_1_RoleA_undefined_var;

class mu_1_RoleB
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_Na;
  mu_1_NonceType mu_Nb;
  mu_1_NonceType mu_Nb1;
  mu_1_NonceType mu_kab;
  mu_1_AgentType mu_A;
  mu_1_AgentType mu_B;
  mu_1_NonceType mu_locNa;
  mu_1_NonceType mu_locNb;
  mu_1_NonceType mu_locNb1;
  mu_1_NonceType mu_lockab;
  mu_1_AgentType mu_locA;
  mu_1_AgentType mu_locB;
  mu_1_BStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleB ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleB ( void ) {};

  virtual ~mu_1_RoleB(); 
friend int CompareWeight(mu_1_RoleB& a, mu_1_RoleB& b)
  {
    int w;
    w = CompareWeight(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Nb1, b.mu_Nb1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_kab, b.mu_kab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNb1, b.mu_locNb1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_lockab, b.mu_lockab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleB& a, mu_1_RoleB& b)
  {
    int w;
    w = Compare(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = Compare(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = Compare(a.mu_Nb1, b.mu_Nb1);
    if (w!=0) return w;
    w = Compare(a.mu_kab, b.mu_kab);
    if (w!=0) return w;
    w = Compare(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = Compare(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = Compare(a.mu_locNb1, b.mu_locNb1);
    if (w!=0) return w;
    w = Compare(a.mu_lockab, b.mu_lockab);
    if (w!=0) return w;
    w = Compare(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = Compare(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = Compare(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_Na.MultisetSort();
    mu_Nb.MultisetSort();
    mu_Nb1.MultisetSort();
    mu_kab.MultisetSort();
    mu_A.MultisetSort();
    mu_B.MultisetSort();
    mu_locNa.MultisetSort();
    mu_locNb.MultisetSort();
    mu_locNb1.MultisetSort();
    mu_lockab.MultisetSort();
    mu_locA.MultisetSort();
    mu_locB.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_Na.print_statistic();
    mu_Nb.print_statistic();
    mu_Nb1.print_statistic();
    mu_kab.print_statistic();
    mu_A.print_statistic();
    mu_B.print_statistic();
    mu_locNa.print_statistic();
    mu_locNb.print_statistic();
    mu_locNb1.print_statistic();
    mu_lockab.print_statistic();
    mu_locA.print_statistic();
    mu_locB.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_Na.clear();
    mu_Nb.clear();
    mu_Nb1.clear();
    mu_kab.clear();
    mu_A.clear();
    mu_B.clear();
    mu_locNa.clear();
    mu_locNb.clear();
    mu_locNb1.clear();
    mu_lockab.clear();
    mu_locA.clear();
    mu_locB.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_Na.undefine();
    mu_Nb.undefine();
    mu_Nb1.undefine();
    mu_kab.undefine();
    mu_A.undefine();
    mu_B.undefine();
    mu_locNa.undefine();
    mu_locNb.undefine();
    mu_locNb1.undefine();
    mu_lockab.undefine();
    mu_locA.undefine();
    mu_locB.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_Na.reset();
    mu_Nb.reset();
    mu_Nb1.reset();
    mu_kab.reset();
    mu_A.reset();
    mu_B.reset();
    mu_locNa.reset();
    mu_locNb.reset();
    mu_locNb1.reset();
    mu_lockab.reset();
    mu_locA.reset();
    mu_locB.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_Na.print();
    mu_Nb.print();
    mu_Nb1.print();
    mu_kab.print();
    mu_A.print();
    mu_B.print();
    mu_locNa.print();
    mu_locNb.print();
    mu_locNb1.print();
    mu_lockab.print();
    mu_locA.print();
    mu_locB.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_Na.print_diff(prevstate);
    mu_Nb.print_diff(prevstate);
    mu_Nb1.print_diff(prevstate);
    mu_kab.print_diff(prevstate);
    mu_A.print_diff(prevstate);
    mu_B.print_diff(prevstate);
    mu_locNa.print_diff(prevstate);
    mu_locNb.print_diff(prevstate);
    mu_locNb1.print_diff(prevstate);
    mu_lockab.print_diff(prevstate);
    mu_locA.print_diff(prevstate);
    mu_locB.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Na.to_state(thestate);
    mu_Nb.to_state(thestate);
    mu_Nb1.to_state(thestate);
    mu_kab.to_state(thestate);
    mu_A.to_state(thestate);
    mu_B.to_state(thestate);
    mu_locNa.to_state(thestate);
    mu_locNb.to_state(thestate);
    mu_locNb1.to_state(thestate);
    mu_lockab.to_state(thestate);
    mu_locA.to_state(thestate);
    mu_locB.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleB& operator= (const mu_1_RoleB& from) {
    mu_Na.value(from.mu_Na.value());
    mu_Nb.value(from.mu_Nb.value());
    mu_Nb1.value(from.mu_Nb1.value());
    mu_kab.value(from.mu_kab.value());
    mu_A.value(from.mu_A.value());
    mu_B.value(from.mu_B.value());
    mu_locNa.value(from.mu_locNa.value());
    mu_locNb.value(from.mu_locNb.value());
    mu_locNb1.value(from.mu_locNb1.value());
    mu_lockab.value(from.mu_lockab.value());
    mu_locA.value(from.mu_locA.value());
    mu_locB.value(from.mu_locB.value());
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleB::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleB::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleB::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Na.set_self_2(name, ".Na", os + 0 ); else mu_Na.set_self_2(NULL, NULL, 0);
  if (name) mu_Nb.set_self_2(name, ".Nb", os + 8 ); else mu_Nb.set_self_2(NULL, NULL, 0);
  if (name) mu_Nb1.set_self_2(name, ".Nb1", os + 16 ); else mu_Nb1.set_self_2(NULL, NULL, 0);
  if (name) mu_kab.set_self_2(name, ".kab", os + 24 ); else mu_kab.set_self_2(NULL, NULL, 0);
  if (name) mu_A.set_self_2(name, ".A", os + 32 ); else mu_A.set_self_2(NULL, NULL, 0);
  if (name) mu_B.set_self_2(name, ".B", os + 40 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa.set_self_2(name, ".locNa", os + 48 ); else mu_locNa.set_self_2(NULL, NULL, 0);
  if (name) mu_locNb.set_self_2(name, ".locNb", os + 56 ); else mu_locNb.set_self_2(NULL, NULL, 0);
  if (name) mu_locNb1.set_self_2(name, ".locNb1", os + 64 ); else mu_locNb1.set_self_2(NULL, NULL, 0);
  if (name) mu_lockab.set_self_2(name, ".lockab", os + 72 ); else mu_lockab.set_self_2(NULL, NULL, 0);
  if (name) mu_locA.set_self_2(name, ".locA", os + 80 ); else mu_locA.set_self_2(NULL, NULL, 0);
  if (name) mu_locB.set_self_2(name, ".locB", os + 88 ); else mu_locB.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 96 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 104 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleB::~mu_1_RoleB()
{
}

/*** end record declaration ***/
mu_1_RoleB mu_1_RoleB_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_indexType array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_indexType& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_1::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1_msgSet
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_1 mu_content;
  mu_1_indexType mu_length;
  mu_1_msgSet ( const char *n, int os ) { set_self(n,os); };
  mu_1_msgSet ( void ) {};

  virtual ~mu_1_msgSet(); 
friend int CompareWeight(mu_1_msgSet& a, mu_1_msgSet& b)
  {
    int w;
    w = CompareWeight(a.mu_content, b.mu_content);
    if (w!=0) return w;
    w = CompareWeight(a.mu_length, b.mu_length);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_msgSet& a, mu_1_msgSet& b)
  {
    int w;
    w = Compare(a.mu_content, b.mu_content);
    if (w!=0) return w;
    w = Compare(a.mu_length, b.mu_length);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_content.MultisetSort();
    mu_length.MultisetSort();
  }
  void print_statistic()
  {
    mu_content.print_statistic();
    mu_length.print_statistic();
  }
  void clear() {
    mu_content.clear();
    mu_length.clear();
 };
  void undefine() {
    mu_content.undefine();
    mu_length.undefine();
 };
  void reset() {
    mu_content.reset();
    mu_length.reset();
 };
  void print() {
    mu_content.print();
    mu_length.print();
  };
  void print_diff(state *prevstate) {
    mu_content.print_diff(prevstate);
    mu_length.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_content.to_state(thestate);
    mu_length.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_msgSet& operator= (const mu_1_msgSet& from) {
    mu_content = from.mu_content;
    mu_length.value(from.mu_length.value());
    return *this;
  };
};

  void mu_1_msgSet::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_msgSet::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_msgSet::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_content.set_self_2(name, ".content", os + 0 ); else mu_content.set_self_2(NULL, NULL, 0);
  if (name) mu_length.set_self_2(name, ".length", os + 808 ); else mu_length.set_self_2(NULL, NULL, 0);
}

mu_1_msgSet::~mu_1_msgSet()
{
}

/*** end record declaration ***/
mu_1_msgSet mu_1_msgSet_undefined_var;

class mu_1__type_2
{
 public:
  mu_1_Channel array[ 19 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_Channel& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 18 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 19; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<19; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<19; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<19; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<19; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 19; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 19; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 19; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 19; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 19; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 19; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_2::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 19; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 288 + os);
    delete[] s;
  }
};
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3
{
 public:
  mu_1_RoleA array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_RoleA& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_3& operator= (const mu_1__type_3& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_3::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_3::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_3::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 112 + os);
    delete[] s;
  }
};
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1__type_4
{
 public:
  mu_1_RoleB array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1_RoleB& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_4::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_4::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_4::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 112 + os);
    delete[] s;
  }
};
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1__type_5
{
 public:
  mu_1_Message array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1_Message& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 101; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_5::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_5::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_5::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 264 + os);
    delete[] s;
  }
};
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1__type_6
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_6::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_6::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_6::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_6::~mu_1__type_6()
{
}
/*** end array declaration ***/
mu_1__type_6 mu_1__type_6_undefined_var;

class mu_1__type_7
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_7::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_7::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_7::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1__type_8
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_8::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_8::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_8::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1__type_9
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_9 (const char *n, int os) { set_self(n, os); };
  mu_1__type_9 ( void ) {};
  virtual ~mu_1__type_9 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_9& operator= (const mu_1__type_9& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_9::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_9::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_9::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_9::~mu_1__type_9()
{
}
/*** end array declaration ***/
mu_1__type_9 mu_1__type_9_undefined_var;

const int mu_roleANum = 1;
const int mu_roleBNum = 1;
const int mu_totalFact = 100;
const int mu_msgLength = 10;
const int mu_chanNum = 18;
const int mu_invokeNum = 10;
const int mu_anyAgent = 1;
const int mu_Intruder = 2;
const int mu_Alice = 3;
const int mu_Bob = 4;
const int mu_anyNonce = 5;
const int mu_Na = 6;
const int mu_Nb = 7;
const int mu_Nb1 = 8;
const int mu_kab = 9;
const int mu_anyNumber = 10;
const int mu_null = 11;
const int mu_agent = 12;
const int mu_nonce = 13;
const int mu_key = 14;
const int mu_aenc = 15;
const int mu_senc = 16;
const int mu_sign = 17;
const int mu_concat = 18;
const int mu_hash = 19;
const int mu_tmp = 20;
const int mu_mod = 21;
const int mu_e = 22;
const int mu_number = 23;
const int mu_PK = 24;
const int mu_SK = 25;
const int mu_Symk = 26;
const int mu_MsgK = 27;
const int mu_A1 = 28;
const int mu_A2 = 29;
const int mu_A3 = 30;
const int mu_A4 = 31;
const int mu_B1 = 32;
const int mu_B2 = 33;
const int mu_B3 = 34;
const int mu_B4 = 35;
/*** Variable declaration ***/
mu_1__type_2 mu_ch("ch",0);

/*** Variable declaration ***/
mu_1__type_3 mu_roleA("roleA",5472);

/*** Variable declaration ***/
mu_1__type_4 mu_roleB("roleB",5584);

/*** Variable declaration ***/
mu_1__type_5 mu_msgs("msgs",5696);

/*** Variable declaration ***/
mu_1_indexType mu_msg_end("msg_end",32360);

/*** Variable declaration ***/
mu_1_msgSet mu_pat1Set("pat1Set",32368);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat1Set("sPat1Set",33184);

/*** Variable declaration ***/
mu_1_msgSet mu_pat2Set("pat2Set",34000);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat2Set("sPat2Set",34816);

/*** Variable declaration ***/
mu_1_msgSet mu_pat3Set("pat3Set",35632);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat3Set("sPat3Set",36448);

/*** Variable declaration ***/
mu_1_msgSet mu_pat4Set("pat4Set",37264);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat4Set("sPat4Set",38080);

/*** Variable declaration ***/
mu_1_msgSet mu_pat5Set("pat5Set",38896);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat5Set("sPat5Set",39712);

/*** Variable declaration ***/
mu_1_msgSet mu_pat6Set("pat6Set",40528);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat6Set("sPat6Set",41344);

/*** Variable declaration ***/
mu_1_msgSet mu_pat7Set("pat7Set",42160);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat7Set("sPat7Set",42976);

/*** Variable declaration ***/
mu_1_msgSet mu_pat8Set("pat8Set",43792);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat8Set("sPat8Set",44608);

/*** Variable declaration ***/
mu_1__type_6 mu_A_known("A_known",45424);

/*** Variable declaration ***/
mu_1__type_7 mu_B_known("B_known",46232);

/*** Variable declaration ***/
mu_1__type_8 mu_Spy_known("Spy_known",47040);

/*** Variable declaration ***/
mu_0_boolean mu_IntruEmit1("IntruEmit1",47848);

/*** Variable declaration ***/
mu_0_boolean mu_IntruEmit2("IntruEmit2",47856);

/*** Variable declaration ***/
mu_0_boolean mu_IntruEmit3("IntruEmit3",47864);

/*** Variable declaration ***/
mu_0_boolean mu_IntruEmit4("IntruEmit4",47872);

/*** Variable declaration ***/
mu_1__type_9 mu_emit("emit",47880);

/*** Variable declaration ***/
mu_1_indexType mu_gnum("gnum",48688);

void mu_get_msgNo(mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_indexType mu_j("j",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",16);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_msg.mu_msgType) )
{
bool mu__boolexpr10;
bool mu__boolexpr11;
bool mu__boolexpr12;
bool mu__boolexpr13;
bool mu__boolexpr14;
bool mu__boolexpr15;
bool mu__boolexpr16;
bool mu__boolexpr17;
bool mu__boolexpr18;
bool mu__boolexpr19;
bool mu__boolexpr20;
bool mu__boolexpr21;
  if (!((mu_msg.mu_msgType) == (mu_agent))) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
  if (mu__boolexpr21) mu__boolexpr20 = TRUE ;
  else {
bool mu__boolexpr22;
  if (!((mu_msg.mu_msgType) == (mu_nonce))) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
  mu__boolexpr20 = (mu__boolexpr22) ; 
}
  if (mu__boolexpr20) mu__boolexpr19 = TRUE ;
  else {
bool mu__boolexpr23;
  if (!((mu_msg.mu_msgType) == (mu_tmp))) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_msgs[mu_i].mu_tmpPart) == (mu_msg.mu_tmpPart)) ; 
}
  mu__boolexpr19 = (mu__boolexpr23) ; 
}
  if (mu__boolexpr19) mu__boolexpr18 = TRUE ;
  else {
bool mu__boolexpr24;
bool mu__boolexpr25;
  if (!((mu_msg.mu_msgType) == (mu_mod))) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_msgs[mu_i].mu_modMsg1) == (mu_msg.mu_modMsg1)) ; 
}
  if (!(mu__boolexpr25)) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_msgs[mu_i].mu_modMsg2) == (mu_msg.mu_modMsg2)) ; 
}
  mu__boolexpr18 = (mu__boolexpr24) ; 
}
  if (mu__boolexpr18) mu__boolexpr17 = TRUE ;
  else {
bool mu__boolexpr26;
bool mu__boolexpr27;
  if (!((mu_msg.mu_msgType) == (mu_e))) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_msgs[mu_i].mu_expMsg1) == (mu_msg.mu_expMsg1)) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = ((mu_msgs[mu_i].mu_expMsg2) == (mu_msg.mu_expMsg2)) ; 
}
  mu__boolexpr17 = (mu__boolexpr26) ; 
}
  if (mu__boolexpr17) mu__boolexpr16 = TRUE ;
  else {
bool mu__boolexpr28;
  if (!((mu_msg.mu_msgType) == (mu_number))) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = ((mu_msgs[mu_i].mu_constPart) == (mu_msg.mu_constPart)) ; 
}
  mu__boolexpr16 = (mu__boolexpr28) ; 
}
  if (mu__boolexpr16) mu__boolexpr15 = TRUE ;
  else {
bool mu__boolexpr29;
  if (!((mu_msg.mu_msgType) == (mu_key))) mu__boolexpr29 = FALSE ;
  else {
bool mu__boolexpr30;
bool mu__boolexpr31;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = ((mu_msg.mu_k.mu_encType) != (mu_Symk)) ; 
}
  if (!(mu__boolexpr31)) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr29 = (mu__boolexpr30) ; 
}
  mu__boolexpr15 = (mu__boolexpr29) ; 
}
  if (mu__boolexpr15) mu__boolexpr14 = TRUE ;
  else {
bool mu__boolexpr32;
  if (!((mu_msg.mu_msgType) == (mu_key))) mu__boolexpr32 = FALSE ;
  else {
bool mu__boolexpr33;
bool mu__boolexpr34;
bool mu__boolexpr35;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_msg.mu_k.mu_encType) == (mu_Symk)) ; 
}
  if (!(mu__boolexpr35)) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = ((mu_msgs[mu_i].mu_k.mu_ag1) == (mu_msg.mu_k.mu_ag1)) ; 
}
  if (!(mu__boolexpr34)) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_msgs[mu_i].mu_k.mu_ag2) == (mu_msg.mu_k.mu_ag2)) ; 
}
  mu__boolexpr32 = (mu__boolexpr33) ; 
}
  mu__boolexpr14 = (mu__boolexpr32) ; 
}
  if (mu__boolexpr14) mu__boolexpr13 = TRUE ;
  else {
bool mu__boolexpr36;
  if (!((mu_msg.mu_msgType) == (mu_aenc))) mu__boolexpr36 = FALSE ;
  else {
bool mu__boolexpr37;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg))) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey)) ; 
}
  mu__boolexpr36 = (mu__boolexpr37) ; 
}
  mu__boolexpr13 = (mu__boolexpr36) ; 
}
  if (mu__boolexpr13) mu__boolexpr12 = TRUE ;
  else {
bool mu__boolexpr38;
  if (!((mu_msg.mu_msgType) == (mu_senc))) mu__boolexpr38 = FALSE ;
  else {
bool mu__boolexpr39;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg))) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey)) ; 
}
  mu__boolexpr38 = (mu__boolexpr39) ; 
}
  mu__boolexpr12 = (mu__boolexpr38) ; 
}
  if (mu__boolexpr12) mu__boolexpr11 = TRUE ;
  else {
bool mu__boolexpr40;
  if (!((mu_msg.mu_msgType) == (mu_sign))) mu__boolexpr40 = FALSE ;
  else {
bool mu__boolexpr41;
  if (!((mu_msgs[mu_i].mu_signMsg) == (mu_msg.mu_signMsg))) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = ((mu_msgs[mu_i].mu_signKey) == (mu_msg.mu_signKey)) ; 
}
  mu__boolexpr40 = (mu__boolexpr41) ; 
}
  mu__boolexpr11 = (mu__boolexpr40) ; 
}
  if (mu__boolexpr11) mu__boolexpr10 = TRUE ;
  else {
bool mu__boolexpr42;
  if (!((mu_msg.mu_msgType) == (mu_hash))) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = ((mu_msgs[mu_i].mu_hashMsg) == (mu_msg.mu_hashMsg)) ; 
}
  mu__boolexpr10 = (mu__boolexpr42) ; 
}
if ( mu__boolexpr10 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr43;
  if (!((mu_msg.mu_msgType) == (mu_concat))) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_msg.mu_length) == (mu_msgs[mu_i].mu_length)) ; 
}
if ( mu__boolexpr43 )
{
mu_j = mu_msg.mu_length;
mu_flag = mu_true;
{
  bool mu__while_expr_45;  mu__while_expr_45 = (mu_j) > (0);
int mu__counter_44 = 0;
while (mu__while_expr_45) {
if ( ++mu__counter_44 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msg.mu_concatPart[mu_j]) != (mu_msgs[mu_i].mu_concatPart[mu_j]) )
{
mu_flag = mu_false;
}
mu_j = (mu_j) - (1);
};
mu__while_expr_45 = (mu_j) > (0);
}
};
if ( mu_flag )
{
mu_index = mu_i;
}
}
}
}
};
};
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_printMsg(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

if ( (mu_msg.mu_msgType) == (mu_null) )
{
cout << "null\n";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_agent) )
{
cout << ( mu_msg.mu_ag );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_nonce) )
{
cout << ( mu_msg.mu_noncePart );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_key) )
{
if ( (mu_msg.mu_k.mu_encType) == (mu_PK) )
{
cout << "PK(";
cout << ( mu_msg.mu_k.mu_ag );
cout << ")";
}
else
{
if ( (mu_msg.mu_k.mu_encType) == (mu_SK) )
{
cout << "SK(";
cout << ( mu_msg.mu_k.mu_ag );
cout << ")";
}
else
{
if ( (mu_msg.mu_k.mu_encType) == (mu_Symk) )
{
cout << "SymK(";
cout << ( mu_msg.mu_k.mu_ag1 );
cout << ",";
cout << ( mu_msg.mu_k.mu_ag2 );
cout << ")";
}
}
}
}
else
{
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
cout << "aenc{";
mu_printMsg ( mu_msgs[mu_msg.mu_aencMsg] );
cout << "}";
mu_printMsg ( mu_msgs[mu_msg.mu_aencKey] );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_senc) )
{
cout << "senc{";
mu_printMsg ( mu_msgs[mu_msg.mu_sencMsg] );
cout << "}";
mu_printMsg ( mu_msgs[mu_msg.mu_sencKey] );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_sign) )
{
cout << "sign{";
mu_printMsg ( mu_msgs[mu_msg.mu_signMsg] );
cout << "}";
mu_printMsg ( mu_msgs[mu_msg.mu_signKey] );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_hash) )
{
cout << "hash(";
mu_printMsg ( mu_msgs[mu_msg.mu_hashMsg] );
cout << ");";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_mod) )
{
cout << "mod{";
mu_printMsg ( mu_msgs[mu_msg.mu_modMsg1] );
cout << ",";
mu_printMsg ( mu_msgs[mu_msg.mu_modMsg2] );
cout << "}";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_e) )
{
cout << "exp{";
mu_printMsg ( mu_msgs[mu_msg.mu_expMsg1] );
cout << ",";
mu_printMsg ( mu_msgs[mu_msg.mu_expMsg2] );
cout << "}";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_number) )
{
cout << ( mu_msg.mu_constPart );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_tmp) )
{
cout << "tmp{";
mu_printMsg ( mu_msgs[mu_msg.mu_tmpPart] );
cout << "}";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
cout << "concat(";
mu_i = 1;
{
  bool mu__while_expr_47;  mu__while_expr_47 = (mu_i) < (mu_msg.mu_length);
int mu__counter_46 = 0;
while (mu__while_expr_47) {
if ( ++mu__counter_46 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart[mu_i]] );
cout << ",";
mu_i = (mu_i) + (1);
};
mu__while_expr_47 = (mu_i) < (mu_msg.mu_length);
}
};
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart[mu_i]] );
cout << ")";
}
}
}
}
}
}
}
}
}
}
}
}
}
};
/*** end procedure declaration ***/

mu_1_Message mu_inverseKey(mu_1_Message& mu_msgK)
{
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

mu_key_inv.mu_msgType = mu_null;
if ( (mu_msgK.mu_msgType) == (mu_key) )
{
mu_key_inv.mu_msgType = mu_msgK.mu_msgType;
if ( (mu_msgK.mu_k.mu_encType) == (mu_PK) )
{
mu_key_inv.mu_k.mu_encType = mu_SK;
mu_key_inv.mu_k.mu_ag = mu_msgK.mu_k.mu_ag;
}
else
{
if ( (mu_msgK.mu_k.mu_encType) == (mu_SK) )
{
mu_key_inv.mu_k.mu_encType = mu_PK;
mu_key_inv.mu_k.mu_ag = mu_msgK.mu_k.mu_ag;
}
else
{
if ( (mu_msgK.mu_k.mu_encType) == (mu_Symk) )
{
mu_key_inv.mu_k.mu_encType = mu_Symk;
mu_key_inv.mu_k.mu_ag1 = mu_msgK.mu_k.mu_ag1;
mu_key_inv.mu_k.mu_ag2 = mu_msgK.mu_k.mu_ag2;
}
}
}
}
else
{
if ( (mu_msgK.mu_msgType) != (mu_key) )
{
if ( (mu_msgK.mu_k.mu_encType) == (mu_MsgK) )
{
mu_key_inv.mu_msgType = mu_msgK.mu_msgType;
if ( (mu_msgK.mu_msgType) == (mu_mod) )
{
mu_key_inv = mu_msgs[mu_msgs[mu_msgK.mu_modMsg1].mu_expMsg1];
mu_key_inv.mu_k.mu_encType = mu_MsgK;
}
else
{
if ( (mu_msgK.mu_msgType) == (mu_hash) )
{
mu_key_inv = mu_msgs[mu_msgK.mu_hashMsg];
mu_key_inv.mu_k.mu_encType = mu_MsgK;
}
}
}
}
}
return mu_key_inv;
	Error.Error("The end of function inverseKey reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_inverseKeyIndex(mu_1_Message& mu_msgK)
{
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",264);

mu_key_inv = mu_inverseKey( mu_msgK );
mu_get_msgNo ( mu_key_inv, mu_index );
return mu_index;
	Error.Error("The end of function inverseKeyIndex reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_judge(mu_1_Message& mu_msg,const mu_1_AgentType& mu_ag,mu_1_Message& mu_msg1)
{
bool mu__boolexpr48;
  if (!((mu_msg.mu_msgType) == (mu_aenc))) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = ((mu_msg1.mu_msgType) != (mu_tmp)) ; 
}
if ( mu__boolexpr48 )
{
return (mu_msgs[mu_msg.mu_aencKey].mu_k.mu_ag) == (mu_ag);
}
else
{
bool mu__boolexpr49;
  if (!((mu_msg.mu_msgType) == (mu_aenc))) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = ((mu_msg1.mu_msgType) == (mu_tmp)) ; 
}
if ( mu__boolexpr49 )
{
return mu_true;
}
else
{
if ( (mu_msg.mu_msgType) == (mu_senc) )
{
bool mu__boolexpr50;
  if ((mu_msgs[mu_msg.mu_sencKey].mu_k.mu_ag1) == (mu_ag)) mu__boolexpr50 = TRUE ;
  else {
  mu__boolexpr50 = ((mu_msgs[mu_msg.mu_sencKey].mu_k.mu_ag2) == (mu_ag)) ; 
}
return mu__boolexpr50;
}
}
}
return mu_true;
	Error.Error("The end of function judge reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_construct4By23(const mu_1_indexType& mu_msgNo21,const mu_1_indexType& mu_msgNo32)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_senc) )
{
bool mu__boolexpr51;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msgNo21))) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msgNo32)) ; 
}
if ( mu__boolexpr51 )
{
mu_index = mu_i;
mu_msg = mu_msgs[mu_index];
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg.mu_msgType = mu_senc;
if (mu_msgNo21.isundefined())
  mu_msg.mu_sencMsg.undefine();
else
  mu_msg.mu_sencMsg = mu_msgNo21;
if (mu_msgNo32.isundefined())
  mu_msg.mu_sencKey.undefine();
else
  mu_msg.mu_sencKey = mu_msgNo32;
mu_msg.mu_length = 1;
}
return mu_msg;
	Error.Error("The end of function construct4By23 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_constructIndex4By23(const mu_1_indexType& mu_msgNo21,const mu_1_indexType& mu_msgNo32)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_senc) )
{
bool mu__boolexpr52;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msgNo21))) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msgNo32)) ; 
}
if ( mu__boolexpr52 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_index = (mu_msg_end) + (1);
}
return mu_index;
	Error.Error("The end of function constructIndex4By23 reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_construct5By14(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr53;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr53 )
{
bool mu__boolexpr54;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr54 )
{
mu_index = mu_i;
mu_msg = mu_msgs[mu_index];
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg.mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msg.mu_concatPart[1].undefine();
else
  mu_msg.mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msg.mu_concatPart[2].undefine();
else
  mu_msg.mu_concatPart[2] = mu_msgNo2;
mu_msg.mu_length = 2;
}
return mu_msg;
	Error.Error("The end of function construct5By14 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_constructIndex5By14(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr55;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr55 )
{
bool mu__boolexpr56;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr56 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_index = (mu_msg_end) + (1);
}
return mu_index;
	Error.Error("The end of function constructIndex5By14 reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_construct6By22(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr57;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr57 )
{
bool mu__boolexpr58;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr58 )
{
mu_index = mu_i;
mu_msg = mu_msgs[mu_index];
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg.mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msg.mu_concatPart[1].undefine();
else
  mu_msg.mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msg.mu_concatPart[2].undefine();
else
  mu_msg.mu_concatPart[2] = mu_msgNo2;
mu_msg.mu_length = 2;
}
return mu_msg;
	Error.Error("The end of function construct6By22 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_constructIndex6By22(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr59;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr59 )
{
bool mu__boolexpr60;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr60 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_index = (mu_msg_end) + (1);
}
return mu_index;
	Error.Error("The end of function constructIndex6By22 reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_construct7By63(const mu_1_indexType& mu_msgNo61,const mu_1_indexType& mu_msgNo32)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_senc) )
{
bool mu__boolexpr61;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msgNo61))) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msgNo32)) ; 
}
if ( mu__boolexpr61 )
{
mu_index = mu_i;
mu_msg = mu_msgs[mu_index];
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg.mu_msgType = mu_senc;
if (mu_msgNo61.isundefined())
  mu_msg.mu_sencMsg.undefine();
else
  mu_msg.mu_sencMsg = mu_msgNo61;
if (mu_msgNo32.isundefined())
  mu_msg.mu_sencKey.undefine();
else
  mu_msg.mu_sencKey = mu_msgNo32;
mu_msg.mu_length = 1;
}
return mu_msg;
	Error.Error("The end of function construct7By63 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_constructIndex7By63(const mu_1_indexType& mu_msgNo61,const mu_1_indexType& mu_msgNo32)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_senc) )
{
bool mu__boolexpr62;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msgNo61))) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msgNo32)) ; 
}
if ( mu__boolexpr62 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_index = (mu_msg_end) + (1);
}
return mu_index;
	Error.Error("The end of function constructIndex7By63 reached without returning values.");
};
/*** end function declaration ***/

void mu_lookAddPat1(const mu_1_AgentType& mu_A, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_agent) )
{
if ( (mu_msgs[mu_i].mu_ag) == (mu_A) )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_agent;
if (mu_A.isundefined())
  mu_msgs[mu_index].mu_ag.undefine();
else
  mu_msgs[mu_index].mu_ag = mu_A;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat1(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_agent) )
{
mu_flag1 = mu_true;
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat1(const mu_1_AgentType& mu_A, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_64;  mu__while_expr_64 = (mu_i) <= (mu_msg_end);
int mu__counter_63 = 0;
while (mu__while_expr_64) {
if ( ++mu__counter_63 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_agent) )
{
if ( (mu_msgs[mu_i].mu_ag) == (mu_A) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_64 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_agent;
if (mu_A.isundefined())
  mu_msgs[mu_index].mu_ag.undefine();
else
  mu_msgs[mu_index].mu_ag = mu_A;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat1Set.mu_length = (mu_sPat1Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat1Set.mu_content[mu_sPat1Set.mu_length].undefine();
else
  mu_sPat1Set.mu_content[mu_sPat1Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat2(const mu_1_NonceType& mu_Na, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
if ( (mu_msgs[mu_i].mu_noncePart) == (mu_Na) )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_nonce;
if (mu_Na.isundefined())
  mu_msgs[mu_index].mu_noncePart.undefine();
else
  mu_msgs[mu_index].mu_noncePart = mu_Na;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat2(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_nonce) )
{
mu_flag1 = mu_true;
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat2(const mu_1_NonceType& mu_Na, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_66;  mu__while_expr_66 = (mu_i) <= (mu_msg_end);
int mu__counter_65 = 0;
while (mu__while_expr_66) {
if ( ++mu__counter_65 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
if ( (mu_msgs[mu_i].mu_noncePart) == (mu_Na) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_66 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_nonce;
if (mu_Na.isundefined())
  mu_msgs[mu_index].mu_noncePart.undefine();
else
  mu_msgs[mu_index].mu_noncePart = mu_Na;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat2Set.mu_length = (mu_sPat2Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat2Set.mu_content[mu_sPat2Set.mu_length].undefine();
else
  mu_sPat2Set.mu_content[mu_sPat2Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat3(const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Bsymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_key) )
{
bool mu__boolexpr67;
bool mu__boolexpr68;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_Symk))) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = ((mu_msgs[mu_i].mu_k.mu_ag1) == (mu_Asymk1)) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = ((mu_msgs[mu_i].mu_k.mu_ag2) == (mu_Bsymk2)) ; 
}
if ( mu__boolexpr67 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_key;
mu_msgs[mu_index].mu_k.mu_encType = mu_Symk;
if (mu_Asymk1.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag1.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag1 = mu_Asymk1;
if (mu_Bsymk2.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag2.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag2 = mu_Bsymk2;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat3(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
bool mu__boolexpr69;
  if (!((mu_msg.mu_msgType) == (mu_key))) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_msg.mu_k.mu_encType) == (mu_Symk)) ; 
}
if ( mu__boolexpr69 )
{
mu_flag1 = mu_true;
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat3(const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Bsymk2, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_71;  mu__while_expr_71 = (mu_i) <= (mu_msg_end);
int mu__counter_70 = 0;
while (mu__while_expr_71) {
if ( ++mu__counter_70 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr72;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = ((mu_msgs[mu_i].mu_k.mu_encType) == (mu_Symk)) ; 
}
if ( mu__boolexpr72 )
{
bool mu__boolexpr73;
  if (!((mu_msgs[mu_i].mu_k.mu_ag1) == (mu_Asymk1))) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = ((mu_msgs[mu_i].mu_k.mu_ag2) == (mu_Bsymk2)) ; 
}
if ( mu__boolexpr73 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_71 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_key;
mu_msgs[mu_index].mu_k.mu_encType = mu_Symk;
if (mu_Asymk1.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag1.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag1 = mu_Asymk1;
if (mu_Bsymk2.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag2.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag2 = mu_Bsymk2;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat3Set.mu_length = (mu_sPat3Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat3Set.mu_content[mu_sPat3Set.mu_length].undefine();
else
  mu_sPat3Set.mu_content[mu_sPat3Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat4(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Bsymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",264);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",528);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",536);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",544);

mu_index = 0;
mu_lookAddPat2 ( mu_Na, mu_msg1, mu_i1 );
mu_lookAddPat3 ( mu_Asymk1, mu_Bsymk2, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_senc) )
{
bool mu__boolexpr74;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_i1))) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = ((mu_msgs[mu_i].mu_sencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr74 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_senc;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_sencMsg.undefine();
else
  mu_msgs[mu_index].mu_sencMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_sencKey.undefine();
else
  mu_msgs[mu_index].mu_sencKey = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat4(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_senc) )
{
mu_isPat2 ( mu_msgs[mu_msg.mu_sencMsg], mu_flagPart1 );
mu_isPat3 ( mu_msgs[mu_msg.mu_sencKey], mu_flagPart2 );
bool mu__boolexpr75;
  if (!(mu_flagPart1)) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = (mu_flagPart2) ; 
}
if ( mu__boolexpr75 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat4(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Bsymk2, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat2 ( mu_Na, mu_i1 );
mu_constructSpat3 ( mu_Asymk1, mu_Bsymk2, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_77;  mu__while_expr_77 = (mu_i) <= (mu_msg_end);
int mu__counter_76 = 0;
while (mu__while_expr_77) {
if ( ++mu__counter_76 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_senc) )
{
bool mu__boolexpr78;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_i1))) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = ((mu_msgs[mu_i].mu_sencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr78 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_77 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_senc;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_sencMsg.undefine();
else
  mu_msgs[mu_index].mu_sencMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_sencKey.undefine();
else
  mu_msgs[mu_index].mu_sencKey = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat4Set.mu_length = (mu_sPat4Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat4Set.mu_content[mu_sPat4Set.mu_length].undefine();
else
  mu_sPat4Set.mu_content[mu_sPat4Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat5(const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Bsymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",264);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",528);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",536);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",544);

mu_index = 0;
mu_lookAddPat1 ( mu_A, mu_msg1, mu_i1 );
mu_lookAddPat4 ( mu_Na, mu_Asymk1, mu_Bsymk2, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr79;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr79 )
{
bool mu__boolexpr80;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr80 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat5(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat4 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr81;
  if (!(mu_flagPart1)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = (mu_flagPart2) ; 
}
if ( mu__boolexpr81 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat5(const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Bsymk2, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat1 ( mu_A, mu_i1 );
mu_constructSpat4 ( mu_Na, mu_Asymk1, mu_Bsymk2, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_83;  mu__while_expr_83 = (mu_i) <= (mu_msg_end);
int mu__counter_82 = 0;
while (mu__while_expr_83) {
if ( ++mu__counter_82 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr84;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr84 )
{
bool mu__boolexpr85;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr85 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_83 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
mu_sPat5Set.mu_length = (mu_sPat5Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat5Set.mu_content[mu_sPat5Set.mu_length].undefine();
else
  mu_sPat5Set.mu_content[mu_sPat5Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat6(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Nb, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",264);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",528);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",536);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",544);

mu_index = 0;
mu_lookAddPat2 ( mu_Na, mu_msg1, mu_i1 );
mu_lookAddPat2 ( mu_Nb, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr86;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr86 )
{
bool mu__boolexpr87;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr87 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat6(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr88;
  if (!(mu_flagPart1)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = (mu_flagPart2) ; 
}
if ( mu__boolexpr88 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat6(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Nb, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat2 ( mu_Na, mu_i1 );
mu_constructSpat2 ( mu_Nb, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_90;  mu__while_expr_90 = (mu_i) <= (mu_msg_end);
int mu__counter_89 = 0;
while (mu__while_expr_90) {
if ( ++mu__counter_89 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr91;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr91 )
{
bool mu__boolexpr92;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr92 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_90 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
mu_sPat6Set.mu_length = (mu_sPat6Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat6Set.mu_content[mu_sPat6Set.mu_length].undefine();
else
  mu_sPat6Set.mu_content[mu_sPat6Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat7(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Bsymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",264);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",528);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",536);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",544);

mu_index = 0;
mu_lookAddPat6 ( mu_Na, mu_Nb, mu_msg1, mu_i1 );
mu_lookAddPat3 ( mu_Asymk1, mu_Bsymk2, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_senc) )
{
bool mu__boolexpr93;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_i1))) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = ((mu_msgs[mu_i].mu_sencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr93 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_senc;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_sencMsg.undefine();
else
  mu_msgs[mu_index].mu_sencMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_sencKey.undefine();
else
  mu_msgs[mu_index].mu_sencKey = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat7(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_senc) )
{
mu_isPat6 ( mu_msgs[mu_msg.mu_sencMsg], mu_flagPart1 );
mu_isPat3 ( mu_msgs[mu_msg.mu_sencKey], mu_flagPart2 );
bool mu__boolexpr94;
  if (!(mu_flagPart1)) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = (mu_flagPart2) ; 
}
if ( mu__boolexpr94 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat7(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Bsymk2, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat6 ( mu_Na, mu_Nb, mu_i1 );
mu_constructSpat3 ( mu_Asymk1, mu_Bsymk2, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_96;  mu__while_expr_96 = (mu_i) <= (mu_msg_end);
int mu__counter_95 = 0;
while (mu__while_expr_96) {
if ( ++mu__counter_95 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_senc) )
{
bool mu__boolexpr97;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_i1))) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = ((mu_msgs[mu_i].mu_sencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr97 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_96 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_senc;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_sencMsg.undefine();
else
  mu_msgs[mu_index].mu_sencMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_sencKey.undefine();
else
  mu_msgs[mu_index].mu_sencKey = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat7Set.mu_length = (mu_sPat7Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat7Set.mu_content[mu_sPat7Set.mu_length].undefine();
else
  mu_sPat7Set.mu_content[mu_sPat7Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_cons1(const mu_1_AgentType& mu_A, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat1 ( mu_A, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct1(mu_1_Message& mu_msg, mu_1_AgentType& mu_A)
{
mu_A = mu_msg.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons2(const mu_1_NonceType& mu_Na, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat2 ( mu_Na, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct2(mu_1_Message& mu_msg, mu_1_NonceType& mu_Na)
{
mu_Na = mu_msg.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons3(const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Bsymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat3 ( mu_Asymk1, mu_Bsymk2, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct3(mu_1_Message& mu_msg, mu_1_AgentType& mu_Asymk1, mu_1_AgentType& mu_Bsymk2)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",40);

mu_msg1.clear();
mu_k1 = mu_msg.mu_k;
mu_Asymk1 = mu_k1.mu_ag1;
mu_Bsymk2 = mu_k1.mu_ag2;
};
/*** end procedure declaration ***/

void mu_cons4(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Bsymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat4 ( mu_Na, mu_Asymk1, mu_Bsymk2, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct4(mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_AgentType& mu_Asymk1, mu_1_AgentType& mu_Bsymk2)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_sencMsg("sencMsg",40);

mu_sencMsg.clear();
mu_k1 = mu_msgs[mu_msg.mu_sencKey].mu_k;
mu_Asymk1 = mu_k1.mu_ag1;
mu_Bsymk2 = mu_k1.mu_ag2;
mu_sencMsg = mu_msgs[mu_msg.mu_sencMsg];
mu_Na = mu_sencMsg.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons5(const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Bsymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat5 ( mu_A, mu_Na, mu_Asymk1, mu_Bsymk2, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct5(mu_1_Message& mu_msg, mu_1_AgentType& mu_A, mu_1_NonceType& mu_Na, mu_1_AgentType& mu_Asymk1, mu_1_AgentType& mu_Bsymk2)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",264);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",528);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_A = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_destruct4 ( mu_msgNum2, mu_Na, mu_Asymk1, mu_Bsymk2 );
};
/*** end procedure declaration ***/

void mu_cons6(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Nb, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat6 ( mu_Na, mu_Nb, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct6(mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_NonceType& mu_Nb)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",264);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",528);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_Na = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_Nb = mu_msgNum2.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons7(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Bsymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat7 ( mu_Na, mu_Nb, mu_Asymk1, mu_Bsymk2, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct7(mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_NonceType& mu_Nb, mu_1_AgentType& mu_Asymk1, mu_1_AgentType& mu_Bsymk2)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_sencMsg("sencMsg",40);

/*** Variable declaration ***/
mu_1_Message mu_sencKey("sencKey",304);

mu_sencMsg = mu_msgs[mu_msg.mu_sencMsg];
mu_sencKey = mu_msgs[mu_msg.mu_sencKey];
mu_destruct6 ( mu_sencMsg, mu_Na, mu_Nb );
mu_destruct3 ( mu_sencKey, mu_Asymk1, mu_Bsymk2 );
};
/*** end procedure declaration ***/

mu_0_boolean mu_exist(mu_1_msgSet& mu_PatnSet,const mu_1_indexType& mu_msgNo)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
{
for(int mu_i = 0; mu_i <= 10; mu_i++) {
bool mu__boolexpr98;
  if (!((mu_msgNo) != (0))) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = ((mu_PatnSet.mu_content[mu_i]) == (mu_msgNo)) ; 
}
if ( mu__boolexpr98 )
{
mu_flag = mu_true;
}
};
};
return mu_flag;
	Error.Error("The end of function exist reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchAgent(const mu_1_AgentType& mu_locAg,mu_1_AgentType& mu_Ag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
if ( (mu_Ag) == (mu_anyAgent) )
{
mu_flag = mu_true;
if (mu_locAg.isundefined())
  mu_Ag.undefine();
else
  mu_Ag = mu_locAg;
}
else
{
if ( (mu_locAg) == (mu_Ag) )
{
mu_flag = mu_true;
}
else
{
mu_flag = mu_false;
}
}
return mu_flag;
	Error.Error("The end of function matchAgent reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchTmp(mu_1_Message& mu_locm,mu_1_Message& mu_m)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

/*** Variable declaration ***/
mu_1_indexType mu_index1("index1",8);

/*** Variable declaration ***/
mu_1_indexType mu_index2("index2",16);

mu_flag = mu_false;
mu_get_msgNo ( mu_m, mu_index2 );
mu_get_msgNo ( mu_locm, mu_index1 );
if ( (mu_m.mu_msgType) == (mu_tmp) )
{
if ( (mu_m.mu_tmpPart) == (0) )
{
mu_flag = mu_true;
mu_m = mu_locm;
}
else
{
if ( (mu_index1) == (mu_index2) )
{
mu_flag = mu_true;
}
}
}
else
{
mu_flag = mu_false;
}
return mu_flag;
	Error.Error("The end of function matchTmp reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchNonce(const mu_1_NonceType& mu_locNa,mu_1_NonceType& mu_Na)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
if ( (mu_Na) == (mu_anyNonce) )
{
mu_flag = mu_true;
if (mu_locNa.isundefined())
  mu_Na.undefine();
else
  mu_Na = mu_locNa;
}
else
{
if ( (mu_locNa) == (mu_Na) )
{
mu_flag = mu_true;
}
else
{
mu_flag = mu_false;
}
}
return mu_flag;
	Error.Error("The end of function matchNonce reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchNumber(const mu_1_ConstType& mu_locNm,mu_1_ConstType& mu_Nm)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
if ( (mu_Nm) == (mu_anyNumber) )
{
mu_flag = mu_true;
if (mu_locNm.isundefined())
  mu_Nm.undefine();
else
  mu_Nm = mu_locNm;
}
else
{
if ( (mu_locNm) == (mu_Nm) )
{
mu_flag = mu_true;
}
else
{
mu_flag = mu_false;
}
}
return mu_flag;
	Error.Error("The end of function matchNumber reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_match(mu_1_Message& mu_m1,mu_1_Message& mu_m2)
{
/*** Variable declaration ***/
mu_0_boolean mu_concatFlag("concatFlag",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",16);

if ( (mu_m1.mu_msgType) == (mu_tmp) )
{
return mu_true;
}
else
{
bool mu__boolexpr99;
  if (!((mu_m1.mu_msgType) == (mu_agent))) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = ((mu_m2.mu_msgType) == (mu_agent)) ; 
}
if ( mu__boolexpr99 )
{
return mu_matchAgent( mu_m1.mu_ag, mu_m2.mu_ag );
}
else
{
bool mu__boolexpr100;
  if (!((mu_m1.mu_msgType) == (mu_nonce))) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = ((mu_m2.mu_msgType) == (mu_nonce)) ; 
}
if ( mu__boolexpr100 )
{
return mu_matchNonce( mu_m1.mu_noncePart, mu_m2.mu_noncePart );
}
else
{
bool mu__boolexpr101;
  if (!((mu_m1.mu_msgType) == (mu_number))) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = ((mu_m2.mu_msgType) == (mu_number)) ; 
}
if ( mu__boolexpr101 )
{
return mu_matchNumber( mu_m1.mu_constPart, mu_m2.mu_constPart );
}
else
{
bool mu__boolexpr102;
  if (!((mu_m1.mu_msgType) == (mu_key))) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = ((mu_m2.mu_msgType) == (mu_key)) ; 
}
if ( mu__boolexpr102 )
{
if ( (mu_m1.mu_k.mu_encType) == (mu_PK) )
{
bool mu__boolexpr103;
  if (!((mu_m1.mu_k.mu_encType) == (mu_m2.mu_k.mu_encType))) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = (mu_matchAgent( mu_m1.mu_k.mu_ag, mu_m2.mu_k.mu_ag )) ; 
}
return mu__boolexpr103;
}
else
{
if ( (mu_m1.mu_k.mu_encType) == (mu_SK) )
{
bool mu__boolexpr104;
  if (!((mu_m1.mu_k.mu_encType) == (mu_m2.mu_k.mu_encType))) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = (mu_matchAgent( mu_m1.mu_k.mu_ag, mu_m2.mu_k.mu_ag )) ; 
}
return mu__boolexpr104;
}
else
{
if ( (mu_m1.mu_k.mu_encType) == (mu_Symk) )
{
bool mu__boolexpr105;
bool mu__boolexpr106;
  if (!((mu_m1.mu_k.mu_encType) == (mu_m2.mu_k.mu_encType))) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (mu_matchAgent( mu_m1.mu_k.mu_ag1, mu_m2.mu_k.mu_ag1 )) ; 
}
  if (!(mu__boolexpr106)) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = (mu_matchAgent( mu_m1.mu_k.mu_ag2, mu_m2.mu_k.mu_ag2 )) ; 
}
return mu__boolexpr105;
}
}
}
}
else
{
bool mu__boolexpr107;
  if (!((mu_m1.mu_msgType) == (mu_aenc))) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = ((mu_m2.mu_msgType) == (mu_aenc)) ; 
}
if ( mu__boolexpr107 )
{
bool mu__boolexpr108;
  if (!(mu_match( mu_msgs[mu_m1.mu_aencMsg], mu_msgs[mu_m2.mu_aencMsg] ))) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = (mu_match( mu_msgs[mu_m1.mu_aencKey], mu_msgs[mu_m2.mu_aencKey] )) ; 
}
return mu__boolexpr108;
}
else
{
bool mu__boolexpr109;
  if (!((mu_m1.mu_msgType) == (mu_senc))) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = ((mu_m2.mu_msgType) == (mu_senc)) ; 
}
if ( mu__boolexpr109 )
{
return mu_true;
}
else
{
bool mu__boolexpr110;
  if (!((mu_m1.mu_msgType) == (mu_mod))) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_m2.mu_msgType) == (mu_mod)) ; 
}
if ( mu__boolexpr110 )
{
bool mu__boolexpr111;
  if (!(mu_match( mu_msgs[mu_m1.mu_modMsg1], mu_msgs[mu_m2.mu_modMsg1] ))) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = (mu_match( mu_msgs[mu_m1.mu_modMsg2], mu_msgs[mu_m2.mu_modMsg2] )) ; 
}
return mu__boolexpr111;
}
else
{
bool mu__boolexpr112;
  if (!((mu_m1.mu_msgType) == (mu_e))) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_m2.mu_msgType) == (mu_e)) ; 
}
if ( mu__boolexpr112 )
{
bool mu__boolexpr113;
  if (!(mu_match( mu_msgs[mu_m1.mu_expMsg1], mu_msgs[mu_m2.mu_expMsg1] ))) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = (mu_match( mu_msgs[mu_m1.mu_expMsg2], mu_msgs[mu_m2.mu_expMsg2] )) ; 
}
return mu__boolexpr113;
}
else
{
bool mu__boolexpr114;
bool mu__boolexpr115;
  if (!((mu_m1.mu_msgType) == (mu_concat))) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = ((mu_m2.mu_msgType) == (mu_concat)) ; 
}
  if (!(mu__boolexpr115)) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = ((mu_m1.mu_length) == (mu_m2.mu_length)) ; 
}
if ( mu__boolexpr114 )
{
mu_concatFlag = mu_true;
mu_i = mu_m1.mu_length;
bool mu__boolexpr118;
  if (!((mu_i) > (0))) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = (mu_concatFlag) ; 
}
{
  bool mu__while_expr_117;  mu__while_expr_117 = mu__boolexpr118;
int mu__counter_116 = 0;
while (mu__while_expr_117) {
if ( ++mu__counter_116 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr119;
  if (!(mu_concatFlag)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = (mu_match( mu_msgs[mu_m1.mu_concatPart[mu_i]], mu_msgs[mu_m2.mu_concatPart[mu_i]] )) ; 
}
mu_concatFlag = mu__boolexpr119;
mu_i = (mu_i) - (1);
};
bool mu__boolexpr120;
  if (!((mu_i) > (0))) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = (mu_concatFlag) ; 
}
mu__while_expr_117 = mu__boolexpr120;
}
};
return mu_concatFlag;
}
else
{
return mu_false;
}
}
}
}
}
}
}
}
}
}
	Error.Error("The end of function match reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchPat(mu_1_Message  mu_m1,mu_1_msgSet& mu_sPatnSet)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

mu_flag = mu_false;
mu_i = 1;
{
  bool mu__while_expr_122;  mu__while_expr_122 = (mu_i) < ((mu_sPatnSet.mu_length) + (1));
int mu__counter_121 = 0;
while (mu__while_expr_122) {
if ( ++mu__counter_121 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( mu_match( mu_m1, mu_msgs[mu_sPatnSet.mu_content[mu_i]] ) )
{
mu_flag = mu_true;
}
mu_i = (mu_i) + (1);
};
mu__while_expr_122 = (mu_i) < ((mu_sPatnSet.mu_length) + (1));
}
};
return mu_flag;
	Error.Error("The end of function matchPat reached without returning values.");
};
/*** end function declaration ***/





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_ch.clear();
  mu_roleA.clear();
  mu_roleB.clear();
  mu_msgs.clear();
  mu_msg_end.clear();
  mu_pat1Set.clear();
  mu_sPat1Set.clear();
  mu_pat2Set.clear();
  mu_sPat2Set.clear();
  mu_pat3Set.clear();
  mu_sPat3Set.clear();
  mu_pat4Set.clear();
  mu_sPat4Set.clear();
  mu_pat5Set.clear();
  mu_sPat5Set.clear();
  mu_pat6Set.clear();
  mu_sPat6Set.clear();
  mu_pat7Set.clear();
  mu_sPat7Set.clear();
  mu_pat8Set.clear();
  mu_sPat8Set.clear();
  mu_A_known.clear();
  mu_B_known.clear();
  mu_Spy_known.clear();
  mu_IntruEmit1.clear();
  mu_IntruEmit2.clear();
  mu_IntruEmit3.clear();
  mu_IntruEmit4.clear();
  mu_emit.clear();
  mu_gnum.clear();
}
void world_class::undefine()
{
  mu_ch.undefine();
  mu_roleA.undefine();
  mu_roleB.undefine();
  mu_msgs.undefine();
  mu_msg_end.undefine();
  mu_pat1Set.undefine();
  mu_sPat1Set.undefine();
  mu_pat2Set.undefine();
  mu_sPat2Set.undefine();
  mu_pat3Set.undefine();
  mu_sPat3Set.undefine();
  mu_pat4Set.undefine();
  mu_sPat4Set.undefine();
  mu_pat5Set.undefine();
  mu_sPat5Set.undefine();
  mu_pat6Set.undefine();
  mu_sPat6Set.undefine();
  mu_pat7Set.undefine();
  mu_sPat7Set.undefine();
  mu_pat8Set.undefine();
  mu_sPat8Set.undefine();
  mu_A_known.undefine();
  mu_B_known.undefine();
  mu_Spy_known.undefine();
  mu_IntruEmit1.undefine();
  mu_IntruEmit2.undefine();
  mu_IntruEmit3.undefine();
  mu_IntruEmit4.undefine();
  mu_emit.undefine();
  mu_gnum.undefine();
}
void world_class::reset()
{
  mu_ch.reset();
  mu_roleA.reset();
  mu_roleB.reset();
  mu_msgs.reset();
  mu_msg_end.reset();
  mu_pat1Set.reset();
  mu_sPat1Set.reset();
  mu_pat2Set.reset();
  mu_sPat2Set.reset();
  mu_pat3Set.reset();
  mu_sPat3Set.reset();
  mu_pat4Set.reset();
  mu_sPat4Set.reset();
  mu_pat5Set.reset();
  mu_sPat5Set.reset();
  mu_pat6Set.reset();
  mu_sPat6Set.reset();
  mu_pat7Set.reset();
  mu_sPat7Set.reset();
  mu_pat8Set.reset();
  mu_sPat8Set.reset();
  mu_A_known.reset();
  mu_B_known.reset();
  mu_Spy_known.reset();
  mu_IntruEmit1.reset();
  mu_IntruEmit2.reset();
  mu_IntruEmit3.reset();
  mu_IntruEmit4.reset();
  mu_emit.reset();
  mu_gnum.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_ch.print();
  mu_roleA.print();
  mu_roleB.print();
  mu_msgs.print();
  mu_msg_end.print();
  mu_pat1Set.print();
  mu_sPat1Set.print();
  mu_pat2Set.print();
  mu_sPat2Set.print();
  mu_pat3Set.print();
  mu_sPat3Set.print();
  mu_pat4Set.print();
  mu_sPat4Set.print();
  mu_pat5Set.print();
  mu_sPat5Set.print();
  mu_pat6Set.print();
  mu_sPat6Set.print();
  mu_pat7Set.print();
  mu_sPat7Set.print();
  mu_pat8Set.print();
  mu_sPat8Set.print();
  mu_A_known.print();
  mu_B_known.print();
  mu_Spy_known.print();
  mu_IntruEmit1.print();
  mu_IntruEmit2.print();
  mu_IntruEmit3.print();
  mu_IntruEmit4.print();
  mu_emit.print();
  mu_gnum.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_ch.print_statistic();
  mu_roleA.print_statistic();
  mu_roleB.print_statistic();
  mu_msgs.print_statistic();
  mu_msg_end.print_statistic();
  mu_pat1Set.print_statistic();
  mu_sPat1Set.print_statistic();
  mu_pat2Set.print_statistic();
  mu_sPat2Set.print_statistic();
  mu_pat3Set.print_statistic();
  mu_sPat3Set.print_statistic();
  mu_pat4Set.print_statistic();
  mu_sPat4Set.print_statistic();
  mu_pat5Set.print_statistic();
  mu_sPat5Set.print_statistic();
  mu_pat6Set.print_statistic();
  mu_sPat6Set.print_statistic();
  mu_pat7Set.print_statistic();
  mu_sPat7Set.print_statistic();
  mu_pat8Set.print_statistic();
  mu_sPat8Set.print_statistic();
  mu_A_known.print_statistic();
  mu_B_known.print_statistic();
  mu_Spy_known.print_statistic();
  mu_IntruEmit1.print_statistic();
  mu_IntruEmit2.print_statistic();
  mu_IntruEmit3.print_statistic();
  mu_IntruEmit4.print_statistic();
  mu_emit.print_statistic();
  mu_gnum.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_ch.print_diff(prevstate);
    mu_roleA.print_diff(prevstate);
    mu_roleB.print_diff(prevstate);
    mu_msgs.print_diff(prevstate);
    mu_msg_end.print_diff(prevstate);
    mu_pat1Set.print_diff(prevstate);
    mu_sPat1Set.print_diff(prevstate);
    mu_pat2Set.print_diff(prevstate);
    mu_sPat2Set.print_diff(prevstate);
    mu_pat3Set.print_diff(prevstate);
    mu_sPat3Set.print_diff(prevstate);
    mu_pat4Set.print_diff(prevstate);
    mu_sPat4Set.print_diff(prevstate);
    mu_pat5Set.print_diff(prevstate);
    mu_sPat5Set.print_diff(prevstate);
    mu_pat6Set.print_diff(prevstate);
    mu_sPat6Set.print_diff(prevstate);
    mu_pat7Set.print_diff(prevstate);
    mu_sPat7Set.print_diff(prevstate);
    mu_pat8Set.print_diff(prevstate);
    mu_sPat8Set.print_diff(prevstate);
    mu_A_known.print_diff(prevstate);
    mu_B_known.print_diff(prevstate);
    mu_Spy_known.print_diff(prevstate);
    mu_IntruEmit1.print_diff(prevstate);
    mu_IntruEmit2.print_diff(prevstate);
    mu_IntruEmit3.print_diff(prevstate);
    mu_IntruEmit4.print_diff(prevstate);
    mu_emit.print_diff(prevstate);
    mu_gnum.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_ch.to_state( newstate );
  mu_roleA.to_state( newstate );
  mu_roleB.to_state( newstate );
  mu_msgs.to_state( newstate );
  mu_msg_end.to_state( newstate );
  mu_pat1Set.to_state( newstate );
  mu_sPat1Set.to_state( newstate );
  mu_pat2Set.to_state( newstate );
  mu_sPat2Set.to_state( newstate );
  mu_pat3Set.to_state( newstate );
  mu_sPat3Set.to_state( newstate );
  mu_pat4Set.to_state( newstate );
  mu_sPat4Set.to_state( newstate );
  mu_pat5Set.to_state( newstate );
  mu_sPat5Set.to_state( newstate );
  mu_pat6Set.to_state( newstate );
  mu_sPat6Set.to_state( newstate );
  mu_pat7Set.to_state( newstate );
  mu_sPat7Set.to_state( newstate );
  mu_pat8Set.to_state( newstate );
  mu_sPat8Set.to_state( newstate );
  mu_A_known.to_state( newstate );
  mu_B_known.to_state( newstate );
  mu_Spy_known.to_state( newstate );
  mu_IntruEmit1.to_state( newstate );
  mu_IntruEmit2.to_state( newstate );
  mu_IntruEmit3.to_state( newstate );
  mu_IntruEmit4.to_state( newstate );
  mu_emit.to_state( newstate );
  mu_gnum.to_state( newstate );
}
void world_class::setstate(state *thestate)
{
}


/********************
  Rule declarations
 ********************/
/******************** RuleBase0 ********************/
class RuleBase0
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i1;
    mu_i1.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("sencrypt 7, i1:%s, j:%s, i:%s", mu_i1.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i1;
    mu_i1.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr123;
bool mu__boolexpr124;
bool mu__boolexpr125;
bool mu__boolexpr126;
bool mu__boolexpr127;
bool mu__boolexpr128;
bool mu__boolexpr129;
bool mu__boolexpr130;
  if (!((mu_roleA[mu_i1].mu_st) == (mu_A2))) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = ((mu_i) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr129)) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr128)) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr126)) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr125)) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = (mu_matchPat( mu_construct7By63( mu_pat6Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] ), mu_sPat7Set )) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = (!(mu_Spy_known[mu_constructIndex7By63( mu_pat6Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr123;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_roleANums mu_i1;
    mu_i1.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 121 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr131;
bool mu__boolexpr132;
bool mu__boolexpr133;
bool mu__boolexpr134;
bool mu__boolexpr135;
bool mu__boolexpr136;
bool mu__boolexpr137;
bool mu__boolexpr138;
  if (!((mu_roleA[mu_i1].mu_st) == (mu_A2))) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = ((mu_i) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr137)) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr135)) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr134)) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = (mu_matchPat( mu_construct7By63( mu_pat6Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] ), mu_sPat7Set )) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = (!(mu_Spy_known[mu_constructIndex7By63( mu_pat6Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr131) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 0;
    mu_i1.value((r % 1) + 1);
    r = r / 1;
    mu_j.value((r % 11) + 0);
    r = r / 11;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i1;
    mu_i1.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",0);

/*** Variable declaration ***/
mu_1_Message mu_encMsg("encMsg",8);

cout << "rule sencrypt7\n";
if ( (mu_msgs[mu_pat3Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_Symk) )
{
mu_encMsgNo = mu_constructIndex7By63( mu_pat6Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] );
if ( (mu_encMsgNo) == ((mu_msg_end) + (1)) )
{
mu_msg_end = (mu_msg_end) + (1);
mu_encMsg = mu_construct7By63( mu_pat6Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] );
mu_msgs[mu_encMsgNo] = mu_encMsg;
}
if ( !(mu_exist( mu_pat7Set, mu_encMsgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_encMsgNo;
}
mu_Spy_known[mu_encMsgNo] = mu_true;
}
  };

};
/******************** RuleBase1 ********************/
class RuleBase1
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("sdecrypt 7, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr139;
bool mu__boolexpr140;
bool mu__boolexpr141;
bool mu__boolexpr142;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr141)) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = (!(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_sencMsg])) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = (mu_Spy_known[mu_inverseKeyIndex( mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_sencKey] )]) ; 
}
    return mu__boolexpr139;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 121;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 132 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr143;
bool mu__boolexpr144;
bool mu__boolexpr145;
bool mu__boolexpr146;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr145)) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = (!(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_sencMsg])) ; 
}
  if (!(mu__boolexpr144)) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = (mu_Spy_known[mu_inverseKeyIndex( mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_sencKey] )]) ; 
}
	      if (mu__boolexpr143) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 121;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat6("msgPat6",264);

/*** Variable declaration ***/
mu_1_indexType mu_keyNo("keyNo",272);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat6("flag_pat6",280);

cout << "rule sdecrypt7\n";
mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_sencKey] );
mu_get_msgNo ( mu_key_inv, mu_keyNo );
bool mu__boolexpr147;
bool mu__boolexpr148;
  if (!((mu_key_inv.mu_k.mu_encType) == (mu_Symk))) mu__boolexpr148 = FALSE ;
  else {
bool mu__boolexpr149;
  if ((mu_key_inv.mu_k.mu_ag1) == (mu_Intruder)) mu__boolexpr149 = TRUE ;
  else {
  mu__boolexpr149 = ((mu_key_inv.mu_k.mu_ag2) == (mu_Intruder)) ; 
}
  mu__boolexpr148 = (mu__boolexpr149) ; 
}
  if (mu__boolexpr148) mu__boolexpr147 = TRUE ;
  else {
  mu__boolexpr147 = (mu_Spy_known[mu_keyNo]) ; 
}
if ( mu__boolexpr147 )
{
mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_sencMsg] = mu_true;
mu_msgPat6 = mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_sencMsg;
mu_isPat6 ( mu_msgs[mu_msgPat6], mu_flag_pat6 );
if ( mu_flag_pat6 )
{
if ( !(mu_exist( mu_pat6Set, mu_msgPat6 )) )
{
mu_pat6Set.mu_length = (mu_pat6Set.mu_length) + (1);
if (mu_msgPat6.isundefined())
  mu_pat6Set.mu_content[mu_pat6Set.mu_length].undefine();
else
  mu_pat6Set.mu_content[mu_pat6Set.mu_length] = mu_msgPat6;
}
}
}
  };

};
/******************** RuleBase2 ********************/
class RuleBase2
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("enconcat 6, i:%s, i2:%s, i1:%s", mu_i.Name(), mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr150;
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
bool mu__boolexpr154;
bool mu__boolexpr155;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A2))) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = ((mu_i1) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr155)) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_i2) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = (mu_matchPat( mu_construct6By22( mu_pat2Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2] ), mu_sPat6Set )) ; 
}
  if (!(mu__boolexpr151)) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = (!(mu_Spy_known[mu_constructIndex6By22( mu_pat2Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2] )])) ; 
}
    return mu__boolexpr150;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 132;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 253 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr156;
bool mu__boolexpr157;
bool mu__boolexpr158;
bool mu__boolexpr159;
bool mu__boolexpr160;
bool mu__boolexpr161;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A2))) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = ((mu_i1) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr160)) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = ((mu_i2) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = (mu_matchPat( mu_construct6By22( mu_pat2Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2] ), mu_sPat6Set )) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = (!(mu_Spy_known[mu_constructIndex6By22( mu_pat2Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2] )])) ; 
}
	      if (mu__boolexpr156) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 132;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    mu_i2.value((r % 11) + 0);
    r = r / 11;
    mu_i1.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 11) + 0);
    r = r / 11;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

/*** Variable declaration ***/
mu_1_Message mu_concatMsg("concatMsg",8);

cout << "rule enconcat6\n";
mu_concatMsgNo = mu_constructIndex6By22( mu_pat2Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2] );
if ( (mu_concatMsgNo) == ((mu_msg_end) + (1)) )
{
mu_msg_end = (mu_msg_end) + (1);
mu_concatMsg = mu_construct6By22( mu_pat2Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2] );
mu_msgs[mu_concatMsgNo] = mu_concatMsg;
}
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat6Set, mu_concatMsgNo )) )
{
mu_pat6Set.mu_length = (mu_pat6Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat6Set.mu_content[mu_pat6Set.mu_length].undefine();
else
  mu_pat6Set.mu_content[mu_pat6Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase3 ********************/
class RuleBase3
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("deconcat 6, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr162;
bool mu__boolexpr163;
bool mu__boolexpr164;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr164)) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
bool mu__boolexpr165;
  if (!(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr162 = (!(mu__boolexpr165)) ; 
}
    return mu__boolexpr162;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 253;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 264 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr166;
bool mu__boolexpr167;
bool mu__boolexpr168;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr168)) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr167)) mu__boolexpr166 = FALSE ;
  else {
bool mu__boolexpr169;
  if (!(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr166 = (!(mu__boolexpr169)) ; 
}
	      if (mu__boolexpr166) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 253;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",24);

cout << "rule deconcat6\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat2 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat1 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat2 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat2 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat2;
}
}
}
  };

};
/******************** RuleBase4 ********************/
class RuleBase4
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("enconcat 5, i:%s, i2:%s, i1:%s", mu_i.Name(), mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr170;
bool mu__boolexpr171;
bool mu__boolexpr172;
bool mu__boolexpr173;
bool mu__boolexpr174;
bool mu__boolexpr175;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B1))) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr175)) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = ((mu_i2) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr173)) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr172)) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = (mu_matchPat( mu_construct5By14( mu_pat1Set.mu_content[mu_i1], mu_pat4Set.mu_content[mu_i2] ), mu_sPat5Set )) ; 
}
  if (!(mu__boolexpr171)) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = (!(mu_Spy_known[mu_constructIndex5By14( mu_pat1Set.mu_content[mu_i1], mu_pat4Set.mu_content[mu_i2] )])) ; 
}
    return mu__boolexpr170;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 264;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 385 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr176;
bool mu__boolexpr177;
bool mu__boolexpr178;
bool mu__boolexpr179;
bool mu__boolexpr180;
bool mu__boolexpr181;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B1))) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr181)) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr180)) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = ((mu_i2) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr178)) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = (mu_matchPat( mu_construct5By14( mu_pat1Set.mu_content[mu_i1], mu_pat4Set.mu_content[mu_i2] ), mu_sPat5Set )) ; 
}
  if (!(mu__boolexpr177)) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = (!(mu_Spy_known[mu_constructIndex5By14( mu_pat1Set.mu_content[mu_i1], mu_pat4Set.mu_content[mu_i2] )])) ; 
}
	      if (mu__boolexpr176) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 264;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    mu_i2.value((r % 11) + 0);
    r = r / 11;
    mu_i1.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 11) + 0);
    r = r / 11;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

/*** Variable declaration ***/
mu_1_Message mu_concatMsg("concatMsg",8);

cout << "rule enconcat5\n";
mu_concatMsgNo = mu_constructIndex5By14( mu_pat1Set.mu_content[mu_i1], mu_pat4Set.mu_content[mu_i2] );
if ( (mu_concatMsgNo) == ((mu_msg_end) + (1)) )
{
mu_msg_end = (mu_msg_end) + (1);
mu_concatMsg = mu_construct5By14( mu_pat1Set.mu_content[mu_i1], mu_pat4Set.mu_content[mu_i2] );
mu_msgs[mu_concatMsgNo] = mu_concatMsg;
}
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat5Set, mu_concatMsgNo )) )
{
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase5 ********************/
class RuleBase5
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("deconcat 5, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr182;
bool mu__boolexpr183;
bool mu__boolexpr184;
  if (!((mu_i) <= (mu_pat5Set.mu_length))) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr183)) mu__boolexpr182 = FALSE ;
  else {
bool mu__boolexpr185;
  if (!(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = (mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr182 = (!(mu__boolexpr185)) ; 
}
    return mu__boolexpr182;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 385;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 396 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr186;
bool mu__boolexpr187;
bool mu__boolexpr188;
  if (!((mu_i) <= (mu_pat5Set.mu_length))) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr187)) mu__boolexpr186 = FALSE ;
  else {
bool mu__boolexpr189;
  if (!(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = (mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr186 = (!(mu__boolexpr189)) ; 
}
	      if (mu__boolexpr186) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 385;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",24);

cout << "rule deconcat5\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat4 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat4Set, mu_msgPat2 )) )
{
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_msgPat2;
}
}
}
  };

};
/******************** RuleBase6 ********************/
class RuleBase6
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i1;
    mu_i1.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("sencrypt 4, i1:%s, j:%s, i:%s", mu_i1.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i1;
    mu_i1.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr190;
bool mu__boolexpr191;
bool mu__boolexpr192;
bool mu__boolexpr193;
bool mu__boolexpr194;
bool mu__boolexpr195;
bool mu__boolexpr196;
bool mu__boolexpr197;
  if (!((mu_roleB[mu_i1].mu_st) == (mu_B1))) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = ((mu_i) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr197)) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = ((mu_pat2Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr196)) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr195)) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr193)) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr192)) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = (mu_matchPat( mu_construct4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] ), mu_sPat4Set )) ; 
}
  if (!(mu__boolexpr191)) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = (!(mu_Spy_known[mu_constructIndex4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr190;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 396;
    static mu_1_roleBNums mu_i1;
    mu_i1.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 517 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr198;
bool mu__boolexpr199;
bool mu__boolexpr200;
bool mu__boolexpr201;
bool mu__boolexpr202;
bool mu__boolexpr203;
bool mu__boolexpr204;
bool mu__boolexpr205;
  if (!((mu_roleB[mu_i1].mu_st) == (mu_B1))) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = ((mu_i) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr205)) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = ((mu_pat2Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr204)) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr203)) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr202)) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = (mu_matchPat( mu_construct4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] ), mu_sPat4Set )) ; 
}
  if (!(mu__boolexpr199)) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = (!(mu_Spy_known[mu_constructIndex4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr198) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 396;
    mu_i1.value((r % 1) + 1);
    r = r / 1;
    mu_j.value((r % 11) + 0);
    r = r / 11;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i1;
    mu_i1.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 11) + 0);
    r = r / 11;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",0);

/*** Variable declaration ***/
mu_1_Message mu_encMsg("encMsg",8);

cout << "rule sencrypt4\n";
if ( (mu_msgs[mu_pat3Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_Symk) )
{
mu_encMsgNo = mu_constructIndex4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] );
if ( (mu_encMsgNo) == ((mu_msg_end) + (1)) )
{
mu_msg_end = (mu_msg_end) + (1);
mu_encMsg = mu_construct4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] );
mu_msgs[mu_encMsgNo] = mu_encMsg;
}
if ( !(mu_exist( mu_pat4Set, mu_encMsgNo )) )
{
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_encMsgNo;
}
mu_Spy_known[mu_encMsgNo] = mu_true;
}
  };

};
/******************** RuleBase7 ********************/
class RuleBase7
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("sdecrypt 4, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr206;
bool mu__boolexpr207;
bool mu__boolexpr208;
bool mu__boolexpr209;
  if (!((mu_i) <= (mu_pat4Set.mu_length))) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = ((mu_pat4Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr209)) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = (!(mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_sencMsg])) ; 
}
  if (!(mu__boolexpr207)) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = (mu_Spy_known[mu_inverseKeyIndex( mu_msgs[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_sencKey] )]) ; 
}
    return mu__boolexpr206;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 517;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 528 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr210;
bool mu__boolexpr211;
bool mu__boolexpr212;
bool mu__boolexpr213;
  if (!((mu_i) <= (mu_pat4Set.mu_length))) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = ((mu_pat4Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr213)) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = (!(mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_sencMsg])) ; 
}
  if (!(mu__boolexpr211)) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = (mu_Spy_known[mu_inverseKeyIndex( mu_msgs[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_sencKey] )]) ; 
}
	      if (mu__boolexpr210) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 517;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",264);

/*** Variable declaration ***/
mu_1_indexType mu_keyNo("keyNo",272);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat2("flag_pat2",280);

cout << "rule sdecrypt4\n";
mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_sencKey] );
mu_get_msgNo ( mu_key_inv, mu_keyNo );
bool mu__boolexpr214;
bool mu__boolexpr215;
  if (!((mu_key_inv.mu_k.mu_encType) == (mu_Symk))) mu__boolexpr215 = FALSE ;
  else {
bool mu__boolexpr216;
  if ((mu_key_inv.mu_k.mu_ag1) == (mu_Intruder)) mu__boolexpr216 = TRUE ;
  else {
  mu__boolexpr216 = ((mu_key_inv.mu_k.mu_ag2) == (mu_Intruder)) ; 
}
  mu__boolexpr215 = (mu__boolexpr216) ; 
}
  if (mu__boolexpr215) mu__boolexpr214 = TRUE ;
  else {
  mu__boolexpr214 = (mu_Spy_known[mu_keyNo]) ; 
}
if ( mu__boolexpr214 )
{
mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_sencMsg] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_sencMsg;
mu_isPat2 ( mu_msgs[mu_msgPat2], mu_flag_pat2 );
if ( mu_flag_pat2 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat2 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat2;
}
}
}
  };

};
/******************** RuleBase8 ********************/
class RuleBase8
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("intruderEmitMsgIntoCh[3], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr217;
bool mu__boolexpr218;
bool mu__boolexpr219;
bool mu__boolexpr220;
bool mu__boolexpr221;
bool mu__boolexpr222;
  if (!((mu_IntruEmit2) == (mu_true))) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = ((mu_roleB[mu_j].mu_st) == (mu_B3)) ; 
}
  if (!(mu__boolexpr222)) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr221)) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = ((mu_i) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = ((mu_pat4Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr218)) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = (!(mu_emit[mu_pat4Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr217;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 528;
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 539 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr223;
bool mu__boolexpr224;
bool mu__boolexpr225;
bool mu__boolexpr226;
bool mu__boolexpr227;
bool mu__boolexpr228;
  if (!((mu_IntruEmit2) == (mu_true))) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = ((mu_roleB[mu_j].mu_st) == (mu_B3)) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr227)) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = ((mu_i) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr226)) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = ((mu_pat4Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = (!(mu_emit[mu_pat4Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr223) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 528;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
mu_ch[3].clear();
mu_ch[3].mu_msg = mu_msgs[mu_pat4Set.mu_content[mu_i]];
mu_ch[3].mu_sender = mu_Intruder;
mu_ch[3].mu_receiver = mu_roleB[mu_j].mu_B;
mu_ch[3].mu_empty = mu_false;
mu_emit[mu_pat4Set.mu_content[mu_i]] = mu_true;
mu_IntruEmit3 = mu_true;
cout << "intruder emit msg into ch[3].\n";
  };

};
/******************** RuleBase9 ********************/
class RuleBase9
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("intruderEmitMsgIntoCh[1], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr229;
bool mu__boolexpr230;
bool mu__boolexpr231;
bool mu__boolexpr232;
bool mu__boolexpr233;
  if (!((mu_roleB[mu_j].mu_st) == (mu_B1))) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr233)) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = ((mu_i) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr232)) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr231)) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = (!(mu_emit[mu_pat5Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr229;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 539;
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 550 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr234;
bool mu__boolexpr235;
bool mu__boolexpr236;
bool mu__boolexpr237;
bool mu__boolexpr238;
  if (!((mu_roleB[mu_j].mu_st) == (mu_B1))) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr238)) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = ((mu_i) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = (!(mu_emit[mu_pat5Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr234) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 539;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
mu_ch[1].clear();
mu_ch[1].mu_msg = mu_msgs[mu_pat5Set.mu_content[mu_i]];
mu_ch[1].mu_sender = mu_Intruder;
mu_ch[1].mu_receiver = mu_roleB[mu_j].mu_B;
mu_ch[1].mu_empty = mu_false;
mu_emit[mu_pat5Set.mu_content[mu_i]] = mu_true;
mu_IntruEmit1 = mu_true;
cout << "intruder emit msg into ch[1].\n";
  };

};
/******************** RuleBase10 ********************/
class RuleBase10
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("intruderEmitMsgIntoCh[4], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr239;
bool mu__boolexpr240;
bool mu__boolexpr241;
bool mu__boolexpr242;
bool mu__boolexpr243;
bool mu__boolexpr244;
  if (!((mu_IntruEmit3) == (mu_true))) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = ((mu_roleA[mu_j].mu_st) == (mu_A4)) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr241)) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr240)) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = (!(mu_emit[mu_pat7Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr239;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 550;
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 561 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr245;
bool mu__boolexpr246;
bool mu__boolexpr247;
bool mu__boolexpr248;
bool mu__boolexpr249;
bool mu__boolexpr250;
  if (!((mu_IntruEmit3) == (mu_true))) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = ((mu_roleA[mu_j].mu_st) == (mu_A4)) ; 
}
  if (!(mu__boolexpr250)) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr249)) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr247)) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = (!(mu_emit[mu_pat7Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr245) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 550;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
mu_ch[4].clear();
mu_ch[4].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[4].mu_sender = mu_Intruder;
mu_ch[4].mu_receiver = mu_roleA[mu_j].mu_A;
mu_ch[4].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
mu_IntruEmit4 = mu_true;
cout << "intruder emit msg into ch[4].\n";
  };

};
/******************** RuleBase11 ********************/
class RuleBase11
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("intruderEmitMsgIntoCh[2], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr251;
bool mu__boolexpr252;
bool mu__boolexpr253;
bool mu__boolexpr254;
bool mu__boolexpr255;
bool mu__boolexpr256;
  if (!((mu_IntruEmit1) == (mu_true))) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = ((mu_roleA[mu_j].mu_st) == (mu_A2)) ; 
}
  if (!(mu__boolexpr256)) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr254)) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr253)) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr252)) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = (!(mu_emit[mu_pat7Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr251;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 561;
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 572 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr257;
bool mu__boolexpr258;
bool mu__boolexpr259;
bool mu__boolexpr260;
bool mu__boolexpr261;
bool mu__boolexpr262;
  if (!((mu_IntruEmit1) == (mu_true))) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = ((mu_roleA[mu_j].mu_st) == (mu_A2)) ; 
}
  if (!(mu__boolexpr262)) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr261)) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr260)) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr259)) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr258)) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = (!(mu_emit[mu_pat7Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr257) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 561;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
mu_ch[2].clear();
mu_ch[2].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[2].mu_sender = mu_Intruder;
mu_ch[2].mu_receiver = mu_roleA[mu_j].mu_A;
mu_ch[2].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
mu_IntruEmit2 = mu_true;
cout << "intruder emit msg into ch[2].\n";
  };

};
/******************** RuleBase12 ********************/
class RuleBase12
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[4]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr263;
  if (!((mu_ch[4].mu_empty) == (mu_false))) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = ((mu_ch[4].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr263;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 572;
    while (what_rule < 573 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr264;
  if (!((mu_ch[4].mu_empty) == (mu_false))) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = ((mu_ch[4].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr264) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 572;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[4].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
mu_ch[4].mu_empty = mu_true;
mu_ch[4].mu_msg.clear();
}
cout << "intruder get msg from ch[4].\n";
  };

};
/******************** RuleBase13 ********************/
class RuleBase13
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[2]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr265;
  if (!((mu_ch[2].mu_empty) == (mu_false))) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = ((mu_ch[2].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr265;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 573;
    while (what_rule < 574 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr266;
  if (!((mu_ch[2].mu_empty) == (mu_false))) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = ((mu_ch[2].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr266) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 573;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[2].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
}
cout << "intruder get msg from ch[2].\n";
  };

};
/******************** RuleBase14 ********************/
class RuleBase14
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[3]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr267;
  if (!((mu_ch[3].mu_empty) == (mu_false))) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = ((mu_ch[3].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr267;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 574;
    while (what_rule < 575 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr268;
  if (!((mu_ch[3].mu_empty) == (mu_false))) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = ((mu_ch[3].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr268) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 574;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat4("flag_pat4",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[3].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat4 ( mu_msg, mu_flag_pat4 );
if ( mu_flag_pat4 )
{
if ( !(mu_exist( mu_pat4Set, mu_msgNo )) )
{
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
}
cout << "intruder get msg from ch[3].\n";
  };

};
/******************** RuleBase15 ********************/
class RuleBase15
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[1]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr269;
  if (!((mu_ch[1].mu_empty) == (mu_false))) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = ((mu_ch[1].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr269;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 575;
    while (what_rule < 576 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr270;
  if (!((mu_ch[1].mu_empty) == (mu_false))) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = ((mu_ch[1].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr270) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 575;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat5("flag_pat5",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[1].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat5 ( mu_msg, mu_flag_pat5 );
if ( mu_flag_pat5 )
{
if ( !(mu_exist( mu_pat5Set, mu_msgNo )) )
{
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
}
cout << "intruder get msg from ch[1].\n";
  };

};
/******************** RuleBase16 ********************/
class RuleBase16
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB4 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr271;
bool mu__boolexpr272;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B4))) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr271;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 576;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 577 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr273;
bool mu__boolexpr274;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B4))) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr274)) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr273) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 576;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",264);

mu_msg.clear();
mu_cons7 ( mu_roleB[mu_i].mu_kab, mu_roleB[mu_i].mu_Nb1, mu_roleB[mu_i].mu_A, mu_roleB[mu_i].mu_B, mu_msg, mu_msgNo );
mu_ch[4].mu_empty = mu_false;
mu_ch[4].mu_msg = mu_msg;
mu_ch[4].mu_sender = mu_roleB[mu_i].mu_B;
mu_ch[4].mu_receiver = mu_Intruder;
mu_roleB[mu_i].mu_st = mu_B1;
cout << "roleB[i] in st4\n";
mu_roleB[mu_i].mu_commit = mu_true;
  };

};
/******************** RuleBase17 ********************/
class RuleBase17
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB3 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr275;
bool mu__boolexpr276;
bool mu__boolexpr277;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B3))) mu__boolexpr277 = FALSE ;
  else {
  mu__boolexpr277 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr277)) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
  if (!(mu__boolexpr276)) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = (mu_judge( mu_ch[3].mu_msg, mu_roleB[mu_i].mu_B, mu_msgs[0] )) ; 
}
    return mu__boolexpr275;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 577;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 578 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr278;
bool mu__boolexpr279;
bool mu__boolexpr280;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B3))) mu__boolexpr280 = FALSE ;
  else {
  mu__boolexpr280 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr280)) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
  if (!(mu__boolexpr279)) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = (mu_judge( mu_ch[3].mu_msg, mu_roleB[mu_i].mu_B, mu_msgs[0] )) ; 
}
	      if (mu__boolexpr278) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 577;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat4("flag_pat4",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

mu_msg.clear();
mu_msg = mu_ch[3].mu_msg;
mu_isPat4 ( mu_msg, mu_flag_pat4 );
bool mu__boolexpr281;
  if (!(mu_flag_pat4)) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = (mu_B_known[mu_msg.mu_sencKey]) ; 
}
if ( mu__boolexpr281 )
{
mu_destruct4 ( mu_msg, mu_roleB[mu_i].mu_locNb, mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_locB );
bool mu__boolexpr282;
bool mu__boolexpr283;
  if (!(mu_matchNonce( mu_roleB[mu_i].mu_locNb, mu_roleB[mu_i].mu_Nb ))) mu__boolexpr283 = FALSE ;
  else {
  mu__boolexpr283 = (mu_matchAgent( mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_A )) ; 
}
  if (!(mu__boolexpr283)) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = (mu_matchAgent( mu_roleB[mu_i].mu_locB, mu_roleB[mu_i].mu_B )) ; 
}
if ( mu__boolexpr282 )
{
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B4;
}
}
cout << "roleB[i] in st3\n";
  };

};
/******************** RuleBase18 ********************/
class RuleBase18
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr284;
bool mu__boolexpr285;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B2))) mu__boolexpr285 = FALSE ;
  else {
  mu__boolexpr285 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr285)) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr284;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 578;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 579 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr286;
bool mu__boolexpr287;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B2))) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr287)) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr286) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 578;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",264);

mu_msg.clear();
mu_cons7 ( mu_roleB[mu_i].mu_Na, mu_roleB[mu_i].mu_Nb, mu_roleB[mu_i].mu_A, mu_roleB[mu_i].mu_B, mu_msg, mu_msgNo );
mu_ch[2].mu_empty = mu_false;
mu_ch[2].mu_msg = mu_msg;
mu_ch[2].mu_sender = mu_roleB[mu_i].mu_B;
mu_ch[2].mu_receiver = mu_Intruder;
mu_roleB[mu_i].mu_st = mu_B3;
cout << "roleB[i] in st2\n";
  };

};
/******************** RuleBase19 ********************/
class RuleBase19
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr288;
bool mu__boolexpr289;
bool mu__boolexpr290;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B1))) mu__boolexpr290 = FALSE ;
  else {
  mu__boolexpr290 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr290)) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
  if (!(mu__boolexpr289)) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = (mu_judge( mu_ch[1].mu_msg, mu_roleB[mu_i].mu_B, mu_msgs[0] )) ; 
}
    return mu__boolexpr288;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 579;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 580 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr291;
bool mu__boolexpr292;
bool mu__boolexpr293;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B1))) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr293)) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
  mu__boolexpr291 = (mu_judge( mu_ch[1].mu_msg, mu_roleB[mu_i].mu_B, mu_msgs[0] )) ; 
}
	      if (mu__boolexpr291) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 579;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat5("flag_pat5",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

mu_msg.clear();
mu_msg = mu_ch[1].mu_msg;
mu_isPat5 ( mu_msg, mu_flag_pat5 );
if ( mu_flag_pat5 )
{
mu_destruct5 ( mu_msg, mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_locNa, mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_locB );
bool mu__boolexpr294;
bool mu__boolexpr295;
bool mu__boolexpr296;
  if (!(mu_matchAgent( mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_A ))) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = (mu_matchNonce( mu_roleB[mu_i].mu_locNa, mu_roleB[mu_i].mu_Na )) ; 
}
  if (!(mu__boolexpr296)) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = (mu_matchAgent( mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_A )) ; 
}
  if (!(mu__boolexpr295)) mu__boolexpr294 = FALSE ;
  else {
  mu__boolexpr294 = (mu_matchAgent( mu_roleB[mu_i].mu_locB, mu_roleB[mu_i].mu_B )) ; 
}
if ( mu__boolexpr294 )
{
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B2;
}
}
cout << "roleB[i] in st1\n";
  };

};
/******************** RuleBase20 ********************/
class RuleBase20
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA4 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr297;
bool mu__boolexpr298;
bool mu__boolexpr299;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A4))) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr299)) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = (mu_judge( mu_ch[4].mu_msg, mu_roleA[mu_i].mu_A, mu_msgs[0] )) ; 
}
    return mu__boolexpr297;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 580;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 581 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr300;
bool mu__boolexpr301;
bool mu__boolexpr302;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A4))) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr302)) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
  if (!(mu__boolexpr301)) mu__boolexpr300 = FALSE ;
  else {
  mu__boolexpr300 = (mu_judge( mu_ch[4].mu_msg, mu_roleA[mu_i].mu_A, mu_msgs[0] )) ; 
}
	      if (mu__boolexpr300) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 580;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

mu_msg.clear();
mu_msg = mu_ch[4].mu_msg;
mu_isPat7 ( mu_msg, mu_flag_pat7 );
bool mu__boolexpr303;
  if (!(mu_flag_pat7)) mu__boolexpr303 = FALSE ;
  else {
  mu__boolexpr303 = (mu_A_known[mu_msg.mu_sencKey]) ; 
}
if ( mu__boolexpr303 )
{
mu_destruct7 ( mu_msg, mu_roleA[mu_i].mu_lockab, mu_roleA[mu_i].mu_locNb1, mu_roleA[mu_i].mu_locA, mu_roleA[mu_i].mu_locB );
bool mu__boolexpr304;
bool mu__boolexpr305;
bool mu__boolexpr306;
  if (!(mu_matchNonce( mu_roleA[mu_i].mu_lockab, mu_roleA[mu_i].mu_kab ))) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = (mu_matchNonce( mu_roleA[mu_i].mu_locNb1, mu_roleA[mu_i].mu_Nb1 )) ; 
}
  if (!(mu__boolexpr306)) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = (mu_matchAgent( mu_roleA[mu_i].mu_locA, mu_roleA[mu_i].mu_A )) ; 
}
  if (!(mu__boolexpr305)) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = (mu_matchAgent( mu_roleA[mu_i].mu_locB, mu_roleA[mu_i].mu_B )) ; 
}
if ( mu__boolexpr304 )
{
mu_ch[4].mu_empty = mu_true;
mu_ch[4].mu_msg.clear();
mu_roleA[mu_i].mu_st = mu_A1;
}
}
cout << "roleA[i] in st4\n";
mu_roleA[mu_i].mu_commit = mu_true;
  };

};
/******************** RuleBase21 ********************/
class RuleBase21
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA3 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr307;
bool mu__boolexpr308;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A3))) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr308)) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
    return mu__boolexpr307;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 581;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 582 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr309;
bool mu__boolexpr310;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A3))) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr310)) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr309) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 581;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",264);

mu_msg.clear();
mu_cons4 ( mu_roleA[mu_i].mu_Nb, mu_roleA[mu_i].mu_A, mu_roleA[mu_i].mu_B, mu_msg, mu_msgNo );
mu_ch[3].mu_empty = mu_false;
mu_ch[3].mu_msg = mu_msg;
mu_ch[3].mu_sender = mu_roleA[mu_i].mu_A;
mu_ch[3].mu_receiver = mu_Intruder;
mu_roleA[mu_i].mu_st = mu_A4;
cout << "roleA[i] in st3\n";
  };

};
/******************** RuleBase22 ********************/
class RuleBase22
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr311;
bool mu__boolexpr312;
bool mu__boolexpr313;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A2))) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr313)) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
  if (!(mu__boolexpr312)) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = (mu_judge( mu_ch[2].mu_msg, mu_roleA[mu_i].mu_A, mu_msgs[0] )) ; 
}
    return mu__boolexpr311;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 582;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 583 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr314;
bool mu__boolexpr315;
bool mu__boolexpr316;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A2))) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
  if (!(mu__boolexpr315)) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = (mu_judge( mu_ch[2].mu_msg, mu_roleA[mu_i].mu_A, mu_msgs[0] )) ; 
}
	      if (mu__boolexpr314) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 582;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

mu_msg.clear();
mu_msg = mu_ch[2].mu_msg;
mu_isPat7 ( mu_msg, mu_flag_pat7 );
bool mu__boolexpr317;
  if (!(mu_flag_pat7)) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = (mu_A_known[mu_msg.mu_sencKey]) ; 
}
if ( mu__boolexpr317 )
{
mu_destruct7 ( mu_msg, mu_roleA[mu_i].mu_locNa, mu_roleA[mu_i].mu_locNb, mu_roleA[mu_i].mu_locA, mu_roleA[mu_i].mu_locB );
bool mu__boolexpr318;
bool mu__boolexpr319;
bool mu__boolexpr320;
  if (!(mu_matchNonce( mu_roleA[mu_i].mu_locNa, mu_roleA[mu_i].mu_Na ))) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = (mu_matchNonce( mu_roleA[mu_i].mu_locNb, mu_roleA[mu_i].mu_Nb )) ; 
}
  if (!(mu__boolexpr320)) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = (mu_matchAgent( mu_roleA[mu_i].mu_locA, mu_roleA[mu_i].mu_A )) ; 
}
  if (!(mu__boolexpr319)) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = (mu_matchAgent( mu_roleA[mu_i].mu_locB, mu_roleA[mu_i].mu_B )) ; 
}
if ( mu__boolexpr318 )
{
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
mu_roleA[mu_i].mu_st = mu_A3;
}
}
cout << "roleA[i] in st2\n";
  };

};
/******************** RuleBase23 ********************/
class RuleBase23
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr321;
bool mu__boolexpr322;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A1))) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr322)) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
    return mu__boolexpr321;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 583;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 584 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr323;
bool mu__boolexpr324;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A1))) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr324)) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr323) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 583;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",264);

mu_msg.clear();
mu_cons5 ( mu_roleA[mu_i].mu_A, mu_roleA[mu_i].mu_Na, mu_roleA[mu_i].mu_A, mu_roleA[mu_i].mu_B, mu_msg, mu_msgNo );
mu_ch[1].mu_empty = mu_false;
mu_ch[1].mu_msg = mu_msg;
mu_ch[1].mu_sender = mu_roleA[mu_i].mu_A;
mu_ch[1].mu_receiver = mu_Intruder;
mu_roleA[mu_i].mu_st = mu_A2;
cout << "roleA[i] in st1\n";
  };

};
class NextStateGenerator
{
  RuleBase0 R0;
  RuleBase1 R1;
  RuleBase2 R2;
  RuleBase3 R3;
  RuleBase4 R4;
  RuleBase5 R5;
  RuleBase6 R6;
  RuleBase7 R7;
  RuleBase8 R8;
  RuleBase9 R9;
  RuleBase10 R10;
  RuleBase11 R11;
  RuleBase12 R12;
  RuleBase13 R13;
  RuleBase14 R14;
  RuleBase15 R15;
  RuleBase16 R16;
  RuleBase17 R17;
  RuleBase18 R18;
  RuleBase19 R19;
  RuleBase20 R20;
  RuleBase21 R21;
  RuleBase22 R22;
  RuleBase23 R23;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<121)
    { R0.NextRule(what_rule);
      if (what_rule<121) return; }
  if (what_rule>=121 && what_rule<132)
    { R1.NextRule(what_rule);
      if (what_rule<132) return; }
  if (what_rule>=132 && what_rule<253)
    { R2.NextRule(what_rule);
      if (what_rule<253) return; }
  if (what_rule>=253 && what_rule<264)
    { R3.NextRule(what_rule);
      if (what_rule<264) return; }
  if (what_rule>=264 && what_rule<385)
    { R4.NextRule(what_rule);
      if (what_rule<385) return; }
  if (what_rule>=385 && what_rule<396)
    { R5.NextRule(what_rule);
      if (what_rule<396) return; }
  if (what_rule>=396 && what_rule<517)
    { R6.NextRule(what_rule);
      if (what_rule<517) return; }
  if (what_rule>=517 && what_rule<528)
    { R7.NextRule(what_rule);
      if (what_rule<528) return; }
  if (what_rule>=528 && what_rule<539)
    { R8.NextRule(what_rule);
      if (what_rule<539) return; }
  if (what_rule>=539 && what_rule<550)
    { R9.NextRule(what_rule);
      if (what_rule<550) return; }
  if (what_rule>=550 && what_rule<561)
    { R10.NextRule(what_rule);
      if (what_rule<561) return; }
  if (what_rule>=561 && what_rule<572)
    { R11.NextRule(what_rule);
      if (what_rule<572) return; }
  if (what_rule>=572 && what_rule<573)
    { R12.NextRule(what_rule);
      if (what_rule<573) return; }
  if (what_rule>=573 && what_rule<574)
    { R13.NextRule(what_rule);
      if (what_rule<574) return; }
  if (what_rule>=574 && what_rule<575)
    { R14.NextRule(what_rule);
      if (what_rule<575) return; }
  if (what_rule>=575 && what_rule<576)
    { R15.NextRule(what_rule);
      if (what_rule<576) return; }
  if (what_rule>=576 && what_rule<577)
    { R16.NextRule(what_rule);
      if (what_rule<577) return; }
  if (what_rule>=577 && what_rule<578)
    { R17.NextRule(what_rule);
      if (what_rule<578) return; }
  if (what_rule>=578 && what_rule<579)
    { R18.NextRule(what_rule);
      if (what_rule<579) return; }
  if (what_rule>=579 && what_rule<580)
    { R19.NextRule(what_rule);
      if (what_rule<580) return; }
  if (what_rule>=580 && what_rule<581)
    { R20.NextRule(what_rule);
      if (what_rule<581) return; }
  if (what_rule>=581 && what_rule<582)
    { R21.NextRule(what_rule);
      if (what_rule<582) return; }
  if (what_rule>=582 && what_rule<583)
    { R22.NextRule(what_rule);
      if (what_rule<583) return; }
  if (what_rule>=583 && what_rule<584)
    { R23.NextRule(what_rule);
      if (what_rule<584) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=120) return R0.Condition(r-0);
  if (r>=121 && r<=131) return R1.Condition(r-121);
  if (r>=132 && r<=252) return R2.Condition(r-132);
  if (r>=253 && r<=263) return R3.Condition(r-253);
  if (r>=264 && r<=384) return R4.Condition(r-264);
  if (r>=385 && r<=395) return R5.Condition(r-385);
  if (r>=396 && r<=516) return R6.Condition(r-396);
  if (r>=517 && r<=527) return R7.Condition(r-517);
  if (r>=528 && r<=538) return R8.Condition(r-528);
  if (r>=539 && r<=549) return R9.Condition(r-539);
  if (r>=550 && r<=560) return R10.Condition(r-550);
  if (r>=561 && r<=571) return R11.Condition(r-561);
  if (r>=572 && r<=572) return R12.Condition(r-572);
  if (r>=573 && r<=573) return R13.Condition(r-573);
  if (r>=574 && r<=574) return R14.Condition(r-574);
  if (r>=575 && r<=575) return R15.Condition(r-575);
  if (r>=576 && r<=576) return R16.Condition(r-576);
  if (r>=577 && r<=577) return R17.Condition(r-577);
  if (r>=578 && r<=578) return R18.Condition(r-578);
  if (r>=579 && r<=579) return R19.Condition(r-579);
  if (r>=580 && r<=580) return R20.Condition(r-580);
  if (r>=581 && r<=581) return R21.Condition(r-581);
  if (r>=582 && r<=582) return R22.Condition(r-582);
  if (r>=583 && r<=583) return R23.Condition(r-583);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=120) { R0.Code(r-0); return; } 
  if (r>=121 && r<=131) { R1.Code(r-121); return; } 
  if (r>=132 && r<=252) { R2.Code(r-132); return; } 
  if (r>=253 && r<=263) { R3.Code(r-253); return; } 
  if (r>=264 && r<=384) { R4.Code(r-264); return; } 
  if (r>=385 && r<=395) { R5.Code(r-385); return; } 
  if (r>=396 && r<=516) { R6.Code(r-396); return; } 
  if (r>=517 && r<=527) { R7.Code(r-517); return; } 
  if (r>=528 && r<=538) { R8.Code(r-528); return; } 
  if (r>=539 && r<=549) { R9.Code(r-539); return; } 
  if (r>=550 && r<=560) { R10.Code(r-550); return; } 
  if (r>=561 && r<=571) { R11.Code(r-561); return; } 
  if (r>=572 && r<=572) { R12.Code(r-572); return; } 
  if (r>=573 && r<=573) { R13.Code(r-573); return; } 
  if (r>=574 && r<=574) { R14.Code(r-574); return; } 
  if (r>=575 && r<=575) { R15.Code(r-575); return; } 
  if (r>=576 && r<=576) { R16.Code(r-576); return; } 
  if (r>=577 && r<=577) { R17.Code(r-577); return; } 
  if (r>=578 && r<=578) { R18.Code(r-578); return; } 
  if (r>=579 && r<=579) { R19.Code(r-579); return; } 
  if (r>=580 && r<=580) { R20.Code(r-580); return; } 
  if (r>=581 && r<=581) { R21.Code(r-581); return; } 
  if (r>=582 && r<=582) { R22.Code(r-582); return; } 
  if (r>=583 && r<=583) { R23.Code(r-583); return; } 
}
int Priority(unsigned short r)
{
  if (r<=120) { return R0.Priority(); } 
  if (r>=121 && r<=131) { return R1.Priority(); } 
  if (r>=132 && r<=252) { return R2.Priority(); } 
  if (r>=253 && r<=263) { return R3.Priority(); } 
  if (r>=264 && r<=384) { return R4.Priority(); } 
  if (r>=385 && r<=395) { return R5.Priority(); } 
  if (r>=396 && r<=516) { return R6.Priority(); } 
  if (r>=517 && r<=527) { return R7.Priority(); } 
  if (r>=528 && r<=538) { return R8.Priority(); } 
  if (r>=539 && r<=549) { return R9.Priority(); } 
  if (r>=550 && r<=560) { return R10.Priority(); } 
  if (r>=561 && r<=571) { return R11.Priority(); } 
  if (r>=572 && r<=572) { return R12.Priority(); } 
  if (r>=573 && r<=573) { return R13.Priority(); } 
  if (r>=574 && r<=574) { return R14.Priority(); } 
  if (r>=575 && r<=575) { return R15.Priority(); } 
  if (r>=576 && r<=576) { return R16.Priority(); } 
  if (r>=577 && r<=577) { return R17.Priority(); } 
  if (r>=578 && r<=578) { return R18.Priority(); } 
  if (r>=579 && r<=579) { return R19.Priority(); } 
  if (r>=580 && r<=580) { return R20.Priority(); } 
  if (r>=581 && r<=581) { return R21.Priority(); } 
  if (r>=582 && r<=582) { return R22.Priority(); } 
  if (r>=583 && r<=583) { return R23.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=120) return R0.Name(r-0);
  if (r>=121 && r<=131) return R1.Name(r-121);
  if (r>=132 && r<=252) return R2.Name(r-132);
  if (r>=253 && r<=263) return R3.Name(r-253);
  if (r>=264 && r<=384) return R4.Name(r-264);
  if (r>=385 && r<=395) return R5.Name(r-385);
  if (r>=396 && r<=516) return R6.Name(r-396);
  if (r>=517 && r<=527) return R7.Name(r-517);
  if (r>=528 && r<=538) return R8.Name(r-528);
  if (r>=539 && r<=549) return R9.Name(r-539);
  if (r>=550 && r<=560) return R10.Name(r-550);
  if (r>=561 && r<=571) return R11.Name(r-561);
  if (r>=572 && r<=572) return R12.Name(r-572);
  if (r>=573 && r<=573) return R13.Name(r-573);
  if (r>=574 && r<=574) return R14.Name(r-574);
  if (r>=575 && r<=575) return R15.Name(r-575);
  if (r>=576 && r<=576) return R16.Name(r-576);
  if (r>=577 && r<=577) return R17.Name(r-577);
  if (r>=578 && r<=578) return R18.Name(r-578);
  if (r>=579 && r<=579) return R19.Name(r-579);
  if (r>=580 && r<=580) return R20.Name(r-580);
  if (r>=581 && r<=581) return R21.Name(r-581);
  if (r>=582 && r<=582) return R22.Name(r-582);
  if (r>=583 && r<=583) return R23.Name(r-583);
  return NULL;
}
};
const unsigned numrules = 584;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 584


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    return tsprintf("Startstate 0");
  }
  void Code(unsigned short r)
  {
mu_roleA[1].mu_A = mu_Alice;
mu_roleA[1].mu_B = mu_Bob;
mu_roleA[1].mu_Na = mu_Na;
mu_roleA[1].mu_st = mu_A1;
mu_roleA[1].mu_commit = mu_false;
mu_roleA[1].mu_Nb = mu_anyNonce;
mu_roleA[1].mu_Nb1 = mu_anyNonce;
mu_roleA[1].mu_kab = mu_anyNonce;
mu_roleB[1].mu_A = mu_Alice;
mu_roleB[1].mu_B = mu_Bob;
mu_roleB[1].mu_Nb = mu_Nb;
mu_roleB[1].mu_Nb1 = mu_Nb1;
mu_roleB[1].mu_kab = mu_kab;
mu_roleB[1].mu_st = mu_B1;
mu_roleB[1].mu_commit = mu_false;
mu_roleB[1].mu_Na = mu_anyNonce;
{
for(int mu_i = 0; mu_i <= 18; mu_i++) {
mu_ch[mu_i].mu_empty = mu_true;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_emit[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_msgs[mu_i].mu_msgType = mu_null;
mu_msgs[mu_i].mu_length = 0;
};
};
mu_msg_end = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_pat1Set.mu_content[mu_i] = 0;
mu_sPat1Set.mu_content[mu_i] = 0;
mu_pat2Set.mu_content[mu_i] = 0;
mu_sPat2Set.mu_content[mu_i] = 0;
mu_pat3Set.mu_content[mu_i] = 0;
mu_sPat3Set.mu_content[mu_i] = 0;
mu_pat4Set.mu_content[mu_i] = 0;
mu_sPat4Set.mu_content[mu_i] = 0;
mu_pat5Set.mu_content[mu_i] = 0;
mu_sPat5Set.mu_content[mu_i] = 0;
mu_pat6Set.mu_content[mu_i] = 0;
mu_sPat6Set.mu_content[mu_i] = 0;
mu_pat7Set.mu_content[mu_i] = 0;
mu_sPat7Set.mu_content[mu_i] = 0;
mu_pat8Set.mu_content[mu_i] = 0;
mu_sPat8Set.mu_content[mu_i] = 0;
mu_pat1Set.mu_length = 0;
mu_sPat1Set.mu_length = 0;
mu_pat2Set.mu_length = 0;
mu_sPat2Set.mu_length = 0;
mu_pat3Set.mu_length = 0;
mu_sPat3Set.mu_length = 0;
mu_pat4Set.mu_length = 0;
mu_sPat4Set.mu_length = 0;
mu_pat5Set.mu_length = 0;
mu_sPat5Set.mu_length = 0;
mu_pat6Set.mu_length = 0;
mu_sPat6Set.mu_length = 0;
mu_pat7Set.mu_length = 0;
mu_sPat7Set.mu_length = 0;
mu_pat8Set.mu_length = 0;
mu_sPat8Set.mu_length = 0;
mu_IntruEmit1 = mu_false;
mu_IntruEmit2 = mu_false;
mu_IntruEmit3 = mu_false;
mu_IntruEmit4 = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_Spy_known[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_A_known[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_B_known[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_Spy_known[mu_i] = mu_false;
};
};
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_Intruder;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_SK;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat8Set.mu_length = (mu_pat8Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat8Set.mu_content[mu_pat8Set.mu_length].undefine();
else
  mu_pat8Set.mu_content[mu_pat8Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag1 = mu_roleA[mu_i].mu_A;
mu_msgs[mu_msg_end].mu_k.mu_ag2 = mu_roleA[mu_i].mu_B;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_Symk;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag1 = mu_roleA[mu_i].mu_A;
mu_msgs[mu_msg_end].mu_k.mu_ag2 = mu_roleA[mu_i].mu_B;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_Symk;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat5 ( mu_roleB[mu_i].mu_A, mu_roleB[mu_i].mu_Na, mu_roleB[mu_i].mu_A, mu_roleB[mu_i].mu_B, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat4 ( mu_roleB[mu_i].mu_Nb, mu_roleB[mu_i].mu_A, mu_roleB[mu_i].mu_B, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat7 ( mu_roleA[mu_i].mu_Na, mu_roleA[mu_i].mu_Nb, mu_roleA[mu_i].mu_A, mu_roleA[mu_i].mu_B, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat7 ( mu_roleA[mu_i].mu_kab, mu_roleA[mu_i].mu_Nb1, mu_roleA[mu_i].mu_A, mu_roleA[mu_i].mu_B, mu_gnum );
};
};
  };

};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=0) { S0.Code(r-0); return; }
}
char * Name(unsigned short r)
{
  if (r<=0) return S0.Name(r-0);
  return NULL;
}
};
const rulerec startstates[] = {
{ NULL, NULL, NULL, FALSE},
};
unsigned short StartStateManager::numstartstates = 1;

/********************
  Invariant records
 ********************/
int mu__invariant_325() // Invariant "secrecy"
{
bool mu__quant326; 
mu__quant326 = TRUE;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr327;
bool mu__boolexpr328;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = ((mu_msgs[mu_i].mu_noncePart) == (mu_kab)) ; 
}
  if (!(mu__boolexpr328)) mu__boolexpr327 = TRUE ;
  else {
  mu__boolexpr327 = ((mu_Spy_known[mu_i]) == (mu_false)) ; 
}
if ( !(mu__boolexpr327) )
  { mu__quant326 = FALSE; break; }
};
};
return mu__quant326;
};

bool mu__condition_329() // Condition for Rule "secrecy"
{
  return mu__invariant_325( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"secrecy", &mu__condition_329, NULL, },
};
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
emit:NoScalarset
IntruEmit4:NoScalarset
IntruEmit2:NoScalarset
Spy_known:NoScalarset
B_known:NoScalarset
A_known:NoScalarset
sPat8Set:NoScalarset
sPat7Set:NoScalarset
sPat6Set:NoScalarset
sPat5Set:NoScalarset
sPat4Set:NoScalarset
sPat3Set:NoScalarset
sPat2Set:NoScalarset
sPat1Set:NoScalarset
msg_end:NoScalarset
ch:NoScalarset
roleA:NoScalarset
roleB:NoScalarset
msgs:NoScalarset
pat1Set:NoScalarset
pat2Set:NoScalarset
pat3Set:NoScalarset
pat4Set:NoScalarset
pat5Set:NoScalarset
pat6Set:NoScalarset
pat7Set:NoScalarset
pat8Set:NoScalarset
IntruEmit1:NoScalarset
IntruEmit3:NoScalarset
gnum:NoScalarset
*/

/********************
Code for symmetry
 ********************/

/********************
 Permutation Set Class
 ********************/
class PermSet
{
public:
  // book keeping
  enum PresentationType {Simple, Explicit};
  PresentationType Presentation;

  void ResetToSimple();
  void ResetToExplicit();
  void SimpleToExplicit();
  void SimpleToOne();
  bool NextPermutation();

  void Print_in_size()
  { int ret=0; for (int i=0; i<count; i++) if (in[i]) ret++; cout << "in_size:" << ret << "\n"; }


  /********************
   Simple and efficient representation
   ********************/
  bool AlreadyOnlyOneRemain;
  bool MoreThanOneRemain();


  /********************
   Explicit representation
  ********************/
  unsigned long size;
  unsigned long count;
  // in will be of product of factorial sizes for fast canonicalize
  // in will be of size 1 for reduced local memory canonicalize
  bool * in;

  // auxiliary for explicit representation

  // in/perm/revperm will be of factorial size for fast canonicalize
  // they will be of size 1 for reduced local memory canonicalize
  // second range will be size of the scalarset
  // procedure for explicit representation
  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];

    // Set perm and revperm

    // setting up combination of permutations
    // for different scalarset
    int carry;
    size = 1;
    count = 1;
    for (i=0; i<1; i++)
      {
        carry = 1;
        in[i]= TRUE;
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
  in[0] = TRUE;
  }
}
void PermSet::ResetToSimple()
{
  int i;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<1; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;

  // Setup range for mapping

  // To be In or not to be

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<1; i++)
    {
      in[i] = TRUE;
    }
  Presentation = Explicit;
  if (args->test_parameter1.value==0) Print_in_size();
}
void PermSet::SimpleToOne()
{
  int i,j,k;
  int class_size;
  int start;


  // Setup range for mapping
  Presentation = Explicit;
}
bool PermSet::NextPermutation()
{
  bool nexted = FALSE;
  int start, end; 
  int class_size;
  int temp;
  int j,k;

  // algorithm
  // for each class
  //   if forall in the same class reverse_sorted, 
  //     { sort again; goto next class }
  //   else
  //     {
  //       nexted = TRUE;
  //       for (j from l to r)
  // 	       if (for all j+ are reversed sorted)
  // 	         {
  // 	           swap j, j+1
  // 	           sort all j+ again
  // 	           break;
  // 	         }
  //     }
if (!nexted) return FALSE;
  return TRUE;
}

/********************
 Symmetry Class
 ********************/
class SymmetryClass
{
  PermSet Perm;
  bool BestInitialized;
  state BestPermutedState;

  // utilities
  void SetBestResult(int i, state* temp);
  void ResetBestResult() {BestInitialized = FALSE;};

public:
  // initializer
  SymmetryClass() : Perm(), BestInitialized(FALSE) {};
  ~SymmetryClass() {};

  void Normalize(state* s);

  void Exhaustive_Fast_Canonicalize(state *s);
  void Heuristic_Fast_Canonicalize(state *s);
  void Heuristic_Small_Mem_Canonicalize(state *s);
  void Heuristic_Fast_Normalize(state *s);

  void MultisetSort(state* s);
};


/********************
 Symmetry Class Members
 ********************/
void SymmetryClass::MultisetSort(state* s)
{
        mu_emit.MultisetSort();
        mu_IntruEmit4.MultisetSort();
        mu_IntruEmit2.MultisetSort();
        mu_Spy_known.MultisetSort();
        mu_B_known.MultisetSort();
        mu_A_known.MultisetSort();
        mu_sPat8Set.MultisetSort();
        mu_sPat7Set.MultisetSort();
        mu_sPat6Set.MultisetSort();
        mu_sPat5Set.MultisetSort();
        mu_sPat4Set.MultisetSort();
        mu_sPat3Set.MultisetSort();
        mu_sPat2Set.MultisetSort();
        mu_sPat1Set.MultisetSort();
        mu_msg_end.MultisetSort();
        mu_ch.MultisetSort();
        mu_roleA.MultisetSort();
        mu_roleB.MultisetSort();
        mu_msgs.MultisetSort();
        mu_pat1Set.MultisetSort();
        mu_pat2Set.MultisetSort();
        mu_pat3Set.MultisetSort();
        mu_pat4Set.MultisetSort();
        mu_pat5Set.MultisetSort();
        mu_pat6Set.MultisetSort();
        mu_pat7Set.MultisetSort();
        mu_pat8Set.MultisetSort();
        mu_IntruEmit1.MultisetSort();
        mu_IntruEmit3.MultisetSort();
        mu_gnum.MultisetSort();
}
void SymmetryClass::Normalize(state* s)
{
  switch (args->sym_alg.mode) {
  case argsym_alg::Exhaustive_Fast_Canonicalize:
    Exhaustive_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Canonicalize:
    Heuristic_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Small_Mem_Canonicalize:
    Heuristic_Small_Mem_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Normalize:
    Heuristic_Fast_Normalize(s);
    break;
  default:
    Heuristic_Fast_Canonicalize(s);
  }
}

/********************
 Permute and Canonicalize function for different types
 ********************/
void mu_1_indexType::Permute(PermSet& Perm, int i) {};
void mu_1_indexType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_indexType::Canonicalize(PermSet& Perm) {};
void mu_1_indexType::SimpleLimit(PermSet& Perm) {};
void mu_1_indexType::ArrayLimit(PermSet& Perm) {};
void mu_1_indexType::Limit(PermSet& Perm) {};
void mu_1_indexType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_roleANums::Permute(PermSet& Perm, int i) {};
void mu_1_roleANums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleANums::Canonicalize(PermSet& Perm) {};
void mu_1_roleANums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleANums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleANums::Limit(PermSet& Perm) {};
void mu_1_roleANums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_roleBNums::Permute(PermSet& Perm, int i) {};
void mu_1_roleBNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleBNums::Canonicalize(PermSet& Perm) {};
void mu_1_roleBNums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleBNums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleBNums::Limit(PermSet& Perm) {};
void mu_1_roleBNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_msgLen::Permute(PermSet& Perm, int i) {};
void mu_1_msgLen::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_msgLen::Canonicalize(PermSet& Perm) {};
void mu_1_msgLen::SimpleLimit(PermSet& Perm) {};
void mu_1_msgLen::ArrayLimit(PermSet& Perm) {};
void mu_1_msgLen::Limit(PermSet& Perm) {};
void mu_1_msgLen::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_chanNums::Permute(PermSet& Perm, int i) {};
void mu_1_chanNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_chanNums::Canonicalize(PermSet& Perm) {};
void mu_1_chanNums::SimpleLimit(PermSet& Perm) {};
void mu_1_chanNums::ArrayLimit(PermSet& Perm) {};
void mu_1_chanNums::Limit(PermSet& Perm) {};
void mu_1_chanNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_invokeNums::Permute(PermSet& Perm, int i) {};
void mu_1_invokeNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_invokeNums::Canonicalize(PermSet& Perm) {};
void mu_1_invokeNums::SimpleLimit(PermSet& Perm) {};
void mu_1_invokeNums::ArrayLimit(PermSet& Perm) {};
void mu_1_invokeNums::Limit(PermSet& Perm) {};
void mu_1_invokeNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_AgentType::Permute(PermSet& Perm, int i) {};
void mu_1_AgentType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_AgentType::Canonicalize(PermSet& Perm) {};
void mu_1_AgentType::SimpleLimit(PermSet& Perm) {};
void mu_1_AgentType::ArrayLimit(PermSet& Perm) {};
void mu_1_AgentType::Limit(PermSet& Perm) {};
void mu_1_AgentType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_NonceType::Permute(PermSet& Perm, int i) {};
void mu_1_NonceType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_NonceType::Canonicalize(PermSet& Perm) {};
void mu_1_NonceType::SimpleLimit(PermSet& Perm) {};
void mu_1_NonceType::ArrayLimit(PermSet& Perm) {};
void mu_1_NonceType::Limit(PermSet& Perm) {};
void mu_1_NonceType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_ConstType::Permute(PermSet& Perm, int i) {};
void mu_1_ConstType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_ConstType::Canonicalize(PermSet& Perm) {};
void mu_1_ConstType::SimpleLimit(PermSet& Perm) {};
void mu_1_ConstType::ArrayLimit(PermSet& Perm) {};
void mu_1_ConstType::Limit(PermSet& Perm) {};
void mu_1_ConstType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_MsgType::Permute(PermSet& Perm, int i) {};
void mu_1_MsgType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_MsgType::Canonicalize(PermSet& Perm) {};
void mu_1_MsgType::SimpleLimit(PermSet& Perm) {};
void mu_1_MsgType::ArrayLimit(PermSet& Perm) {};
void mu_1_MsgType::Limit(PermSet& Perm) {};
void mu_1_MsgType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_EncryptType::Permute(PermSet& Perm, int i) {};
void mu_1_EncryptType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_EncryptType::Canonicalize(PermSet& Perm) {};
void mu_1_EncryptType::SimpleLimit(PermSet& Perm) {};
void mu_1_EncryptType::ArrayLimit(PermSet& Perm) {};
void mu_1_EncryptType::Limit(PermSet& Perm) {};
void mu_1_EncryptType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_KeyType::Permute(PermSet& Perm, int i)
{
};
void mu_1_KeyType::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_KeyType::Canonicalize(PermSet& Perm)
{
};
void mu_1_KeyType::SimpleLimit(PermSet& Perm){}
void mu_1_KeyType::ArrayLimit(PermSet& Perm){}
void mu_1_KeyType::Limit(PermSet& Perm)
{
};
void mu_1_KeyType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_AStatus::Permute(PermSet& Perm, int i) {};
void mu_1_AStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_AStatus::Canonicalize(PermSet& Perm) {};
void mu_1_AStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_AStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_AStatus::Limit(PermSet& Perm) {};
void mu_1_AStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_BStatus::Permute(PermSet& Perm, int i) {};
void mu_1_BStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_BStatus::Canonicalize(PermSet& Perm) {};
void mu_1_BStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_BStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_BStatus::Limit(PermSet& Perm) {};
void mu_1_BStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<11; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_0::Canonicalize(PermSet& Perm){};
void mu_1__type_0::SimpleLimit(PermSet& Perm){}
void mu_1__type_0::ArrayLimit(PermSet& Perm) {}
void mu_1__type_0::Limit(PermSet& Perm){}
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_Message::Permute(PermSet& Perm, int i)
{
};
void mu_1_Message::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Message::Canonicalize(PermSet& Perm)
{
};
void mu_1_Message::SimpleLimit(PermSet& Perm){}
void mu_1_Message::ArrayLimit(PermSet& Perm){}
void mu_1_Message::Limit(PermSet& Perm)
{
};
void mu_1_Message::MultisetLimit(PermSet& Perm)
{
};
void mu_1_Channel::Permute(PermSet& Perm, int i)
{
};
void mu_1_Channel::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Channel::Canonicalize(PermSet& Perm)
{
};
void mu_1_Channel::SimpleLimit(PermSet& Perm){}
void mu_1_Channel::ArrayLimit(PermSet& Perm){}
void mu_1_Channel::Limit(PermSet& Perm)
{
};
void mu_1_Channel::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleA::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleA::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleA::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleA::SimpleLimit(PermSet& Perm){}
void mu_1_RoleA::ArrayLimit(PermSet& Perm){}
void mu_1_RoleA::Limit(PermSet& Perm)
{
};
void mu_1_RoleA::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleB::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleB::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleB::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleB::SimpleLimit(PermSet& Perm){}
void mu_1_RoleB::ArrayLimit(PermSet& Perm){}
void mu_1_RoleB::Limit(PermSet& Perm)
{
};
void mu_1_RoleB::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_1::Canonicalize(PermSet& Perm){};
void mu_1__type_1::SimpleLimit(PermSet& Perm){}
void mu_1__type_1::ArrayLimit(PermSet& Perm) {}
void mu_1__type_1::Limit(PermSet& Perm){}
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_msgSet::Permute(PermSet& Perm, int i)
{
};
void mu_1_msgSet::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_msgSet::Canonicalize(PermSet& Perm)
{
};
void mu_1_msgSet::SimpleLimit(PermSet& Perm){}
void mu_1_msgSet::ArrayLimit(PermSet& Perm){}
void mu_1_msgSet::Limit(PermSet& Perm)
{
};
void mu_1_msgSet::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<19; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_2::Canonicalize(PermSet& Perm){};
void mu_1__type_2::SimpleLimit(PermSet& Perm){}
void mu_1__type_2::ArrayLimit(PermSet& Perm) {}
void mu_1__type_2::Limit(PermSet& Perm){}
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_3::Permute(PermSet& Perm, int i)
{
  static mu_1__type_3 temp("Permute_mu_1__type_3",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_3::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_3::Canonicalize(PermSet& Perm){};
void mu_1__type_3::SimpleLimit(PermSet& Perm){}
void mu_1__type_3::ArrayLimit(PermSet& Perm) {}
void mu_1__type_3::Limit(PermSet& Perm){}
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_4::Permute(PermSet& Perm, int i)
{
  static mu_1__type_4 temp("Permute_mu_1__type_4",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_4::Canonicalize(PermSet& Perm){};
void mu_1__type_4::SimpleLimit(PermSet& Perm){}
void mu_1__type_4::ArrayLimit(PermSet& Perm) {}
void mu_1__type_4::Limit(PermSet& Perm){}
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_5::Permute(PermSet& Perm, int i)
{
  static mu_1__type_5 temp("Permute_mu_1__type_5",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_5::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_5::Canonicalize(PermSet& Perm){};
void mu_1__type_5::SimpleLimit(PermSet& Perm){}
void mu_1__type_5::ArrayLimit(PermSet& Perm) {}
void mu_1__type_5::Limit(PermSet& Perm){}
void mu_1__type_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_6::Permute(PermSet& Perm, int i)
{
  static mu_1__type_6 temp("Permute_mu_1__type_6",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_6::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_6::Canonicalize(PermSet& Perm){};
void mu_1__type_6::SimpleLimit(PermSet& Perm){}
void mu_1__type_6::ArrayLimit(PermSet& Perm) {}
void mu_1__type_6::Limit(PermSet& Perm){}
void mu_1__type_6::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_7::Permute(PermSet& Perm, int i)
{
  static mu_1__type_7 temp("Permute_mu_1__type_7",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_7::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_7::Canonicalize(PermSet& Perm){};
void mu_1__type_7::SimpleLimit(PermSet& Perm){}
void mu_1__type_7::ArrayLimit(PermSet& Perm) {}
void mu_1__type_7::Limit(PermSet& Perm){}
void mu_1__type_7::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_8::Permute(PermSet& Perm, int i)
{
  static mu_1__type_8 temp("Permute_mu_1__type_8",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_8::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_8::Canonicalize(PermSet& Perm){};
void mu_1__type_8::SimpleLimit(PermSet& Perm){}
void mu_1__type_8::ArrayLimit(PermSet& Perm) {}
void mu_1__type_8::Limit(PermSet& Perm){}
void mu_1__type_8::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_9::Permute(PermSet& Perm, int i)
{
  static mu_1__type_9 temp("Permute_mu_1__type_9",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_9::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_9::Canonicalize(PermSet& Perm){};
void mu_1__type_9::SimpleLimit(PermSet& Perm){}
void mu_1__type_9::ArrayLimit(PermSet& Perm) {}
void mu_1__type_9::Limit(PermSet& Perm){}
void mu_1__type_9::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };

/********************
 Auxiliary function for error trace printing
 ********************/
bool match(state* ns, StatePtr p)
{
  int i;
  static PermSet Perm;
  static state temp;
  StateCopy(&temp, ns);
  if (args->symmetry_reduction.value)
    {
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_emit.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_emit.MultisetSort();
              mu_IntruEmit4.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_IntruEmit4.MultisetSort();
              mu_IntruEmit2.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_IntruEmit2.MultisetSort();
              mu_Spy_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Spy_known.MultisetSort();
              mu_B_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_B_known.MultisetSort();
              mu_A_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_A_known.MultisetSort();
              mu_sPat8Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat8Set.MultisetSort();
              mu_sPat7Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat7Set.MultisetSort();
              mu_sPat6Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat6Set.MultisetSort();
              mu_sPat5Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat5Set.MultisetSort();
              mu_sPat4Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat4Set.MultisetSort();
              mu_sPat3Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat3Set.MultisetSort();
              mu_sPat2Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat2Set.MultisetSort();
              mu_sPat1Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat1Set.MultisetSort();
              mu_msg_end.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msg_end.MultisetSort();
              mu_ch.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_ch.MultisetSort();
              mu_roleA.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleA.MultisetSort();
              mu_roleB.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleB.MultisetSort();
              mu_msgs.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msgs.MultisetSort();
              mu_pat1Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat1Set.MultisetSort();
              mu_pat2Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat2Set.MultisetSort();
              mu_pat3Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat3Set.MultisetSort();
              mu_pat4Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat4Set.MultisetSort();
              mu_pat5Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat5Set.MultisetSort();
              mu_pat6Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat6Set.MultisetSort();
              mu_pat7Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat7Set.MultisetSort();
              mu_pat8Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat8Set.MultisetSort();
              mu_IntruEmit1.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_IntruEmit1.MultisetSort();
              mu_IntruEmit3.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_IntruEmit3.MultisetSort();
              mu_gnum.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_gnum.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
      else {
        Perm.ResetToSimple();
        Perm.SimpleToOne();
        if (ns != workingstate)
          StateCopy(workingstate, ns);

          mu_emit.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_emit.MultisetSort();
          mu_IntruEmit4.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_IntruEmit4.MultisetSort();
          mu_IntruEmit2.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_IntruEmit2.MultisetSort();
          mu_Spy_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Spy_known.MultisetSort();
          mu_B_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_B_known.MultisetSort();
          mu_A_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_A_known.MultisetSort();
          mu_sPat8Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat8Set.MultisetSort();
          mu_sPat7Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat7Set.MultisetSort();
          mu_sPat6Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat6Set.MultisetSort();
          mu_sPat5Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat5Set.MultisetSort();
          mu_sPat4Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat4Set.MultisetSort();
          mu_sPat3Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat3Set.MultisetSort();
          mu_sPat2Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat2Set.MultisetSort();
          mu_sPat1Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat1Set.MultisetSort();
          mu_msg_end.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msg_end.MultisetSort();
          mu_ch.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_ch.MultisetSort();
          mu_roleA.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleA.MultisetSort();
          mu_roleB.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleB.MultisetSort();
          mu_msgs.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msgs.MultisetSort();
          mu_pat1Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat1Set.MultisetSort();
          mu_pat2Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat2Set.MultisetSort();
          mu_pat3Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat3Set.MultisetSort();
          mu_pat4Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat4Set.MultisetSort();
          mu_pat5Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat5Set.MultisetSort();
          mu_pat6Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat6Set.MultisetSort();
          mu_pat7Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat7Set.MultisetSort();
          mu_pat8Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat8Set.MultisetSort();
          mu_IntruEmit1.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_IntruEmit1.MultisetSort();
          mu_IntruEmit3.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_IntruEmit3.MultisetSort();
          mu_gnum.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_gnum.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_emit.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_emit.MultisetSort();
              mu_IntruEmit4.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_IntruEmit4.MultisetSort();
              mu_IntruEmit2.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_IntruEmit2.MultisetSort();
              mu_Spy_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Spy_known.MultisetSort();
              mu_B_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_B_known.MultisetSort();
              mu_A_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_A_known.MultisetSort();
              mu_sPat8Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat8Set.MultisetSort();
              mu_sPat7Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat7Set.MultisetSort();
              mu_sPat6Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat6Set.MultisetSort();
              mu_sPat5Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat5Set.MultisetSort();
              mu_sPat4Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat4Set.MultisetSort();
              mu_sPat3Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat3Set.MultisetSort();
              mu_sPat2Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat2Set.MultisetSort();
              mu_sPat1Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat1Set.MultisetSort();
              mu_msg_end.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msg_end.MultisetSort();
              mu_ch.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_ch.MultisetSort();
              mu_roleA.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleA.MultisetSort();
              mu_roleB.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleB.MultisetSort();
              mu_msgs.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msgs.MultisetSort();
              mu_pat1Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat1Set.MultisetSort();
              mu_pat2Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat2Set.MultisetSort();
              mu_pat3Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat3Set.MultisetSort();
              mu_pat4Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat4Set.MultisetSort();
              mu_pat5Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat5Set.MultisetSort();
              mu_pat6Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat6Set.MultisetSort();
              mu_pat7Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat7Set.MultisetSort();
              mu_pat8Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat8Set.MultisetSort();
              mu_IntruEmit1.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_IntruEmit1.MultisetSort();
              mu_IntruEmit3.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_IntruEmit3.MultisetSort();
              mu_gnum.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_gnum.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
    }
  if (!args->symmetry_reduction.value
      && args->multiset_reduction.value)
    {
      if (ns != workingstate)
          StateCopy(workingstate, ns);
      mu_emit.MultisetSort();
      mu_IntruEmit4.MultisetSort();
      mu_IntruEmit2.MultisetSort();
      mu_Spy_known.MultisetSort();
      mu_B_known.MultisetSort();
      mu_A_known.MultisetSort();
      mu_sPat8Set.MultisetSort();
      mu_sPat7Set.MultisetSort();
      mu_sPat6Set.MultisetSort();
      mu_sPat5Set.MultisetSort();
      mu_sPat4Set.MultisetSort();
      mu_sPat3Set.MultisetSort();
      mu_sPat2Set.MultisetSort();
      mu_sPat1Set.MultisetSort();
      mu_msg_end.MultisetSort();
      mu_ch.MultisetSort();
      mu_roleA.MultisetSort();
      mu_roleB.MultisetSort();
      mu_msgs.MultisetSort();
      mu_pat1Set.MultisetSort();
      mu_pat2Set.MultisetSort();
      mu_pat3Set.MultisetSort();
      mu_pat4Set.MultisetSort();
      mu_pat5Set.MultisetSort();
      mu_pat6Set.MultisetSort();
      mu_pat7Set.MultisetSort();
      mu_pat8Set.MultisetSort();
      mu_IntruEmit1.MultisetSort();
      mu_IntruEmit3.MultisetSort();
      mu_gnum.MultisetSort();
      if (p.compare(workingstate)) {
        StateCopy(workingstate,&temp); return TRUE; }
      StateCopy(workingstate,&temp);
      return FALSE;
    }
  return (p.compare(ns));
}

/********************
 Canonicalization by fast exhaustive generation of
 all permutations
 ********************/
void SymmetryClass::Exhaustive_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;
  Perm.ResetToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_emit.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_emit.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_IntruEmit4.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_IntruEmit4.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_IntruEmit2.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_IntruEmit2.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Spy_known.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Spy_known.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_B_known.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_B_known.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_A_known.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_A_known.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat8Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat8Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat7Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat7Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat6Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat6Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat5Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat5Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat4Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat4Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat3Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat3Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat2Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat2Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat1Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat1Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_msg_end.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_msg_end.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_ch.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_ch.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_roleA.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleA.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_roleB.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleB.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_msgs.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_msgs.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat1Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat1Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat2Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat2Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat3Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat3Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat4Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat4Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat5Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat5Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat6Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat6Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat7Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat7Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat8Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat8Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_IntruEmit1.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_IntruEmit1.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_IntruEmit3.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_IntruEmit3.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_gnum.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_gnum.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 ********************/
void SymmetryClass::Heuristic_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Normalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and for all other variables, pick any remaining permutation
 ********************/
void SymmetryClass::Heuristic_Fast_Normalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"
