/* speed.exe 007e3f20 __set_security_error_handler; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __set_security_error_handler
   
   Library: Visual Studio 2003 Debug */

undefined4 __set_security_error_handler(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_009baf48;
  DAT_009baf48 = param_1;
  return uVar1;
}

