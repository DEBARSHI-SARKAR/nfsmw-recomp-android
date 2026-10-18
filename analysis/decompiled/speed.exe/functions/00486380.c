/* speed.exe 00486380 `scalar_deleting_destructor'; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00652b10 thunk_FUN_007c7250
 */

/* Library Function - Single Match
    public: void * __thiscall CProperty::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall CProperty::_scalar_deleting_destructor_(CProperty *this,uint param_1)

{
  if (*(int *)(this + 0x24) != 0) {
    thunk_FUN_007c7250(*(int *)(this + 0x24));
    *(undefined4 *)(this + 0x24) = 0;
  }
  if ((param_1 & 1) != 0) {
    thunk_FUN_007c7250(this);
  }
  return this;
}

