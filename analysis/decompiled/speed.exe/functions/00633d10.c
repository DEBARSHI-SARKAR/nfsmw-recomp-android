/* speed.exe 00633d10 FUN_00633d10; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00633d10(int param_1)

{
  char cVar1;
  char cVar2;
  
  if ((((*(int *)(param_1 + 0x26c) < 1) || (*(int *)(param_1 + 0x268) < 0)) ||
      (*(char *)(param_1 + 0x280) == '\0')) || (*(int *)(param_1 + 0x270) == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if ((*(int *)(param_1 + 0x288) == 0) || (*(int *)(param_1 + 0x288) == 0x7fffffff)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (cVar2 != cVar1) {
    *(uint *)(param_1 + 0x288) = -(uint)(cVar2 != '\0') & DAT_00925b14;
  }
  return;
}

