/* speed.exe 007c5880 ~exception; analysis pseudocode, not buildable source.
 * calls 007c7250 FUN_007c7250
 */

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = &PTR_FUN_008b80d0;
  if (*(int *)(this + 8) != 0) {
    FUN_007c7250(*(undefined4 *)(this + 4));
  }
  return;
}

