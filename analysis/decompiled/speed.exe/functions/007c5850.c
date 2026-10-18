/* speed.exe 007c5850 operator=; analysis pseudocode, not buildable source.
 * calls 007c57d0 exception
 * calls 007c5880 ~exception
 */

/* Library Function - Single Match
    public: class exception & __thiscall exception::operator=(class exception const &)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

exception * __thiscall exception::operator=(exception *this,exception *param_1)

{
  if (this != param_1) {
    ~exception(this);
    exception(this,param_1);
  }
  return this;
}

