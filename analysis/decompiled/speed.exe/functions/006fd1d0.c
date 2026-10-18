/* speed.exe 006fd1d0 FUN_006fd1d0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006fd1d0(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if ((cVar1 != '\0') && ((char)param_1[0xe3] == '\0')) {
    *(undefined1 *)(param_1 + 0xe3) = 1;
  }
  return;
}

