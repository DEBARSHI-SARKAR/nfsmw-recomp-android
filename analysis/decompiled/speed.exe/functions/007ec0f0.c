/* speed.exe 007ec0f0 FUN_007ec0f0; analysis pseudocode, not buildable source.
 * calls 007d7190 _fflush
 * calls 007c9b40 _vsprintf
 * calls 007c5e60 _printf
 */

void FUN_007ec0f0(char *param_1)

{
  code *pcVar1;
  char local_204 [512];
  
  if (param_1 == (char *)0x0) {
    local_204[0] = '\0';
  }
  else {
    _vsprintf(local_204,param_1,&stack0x00000008);
  }
  _printf("%s",local_204);
  _fflush((FILE *)&DAT_00906350);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

