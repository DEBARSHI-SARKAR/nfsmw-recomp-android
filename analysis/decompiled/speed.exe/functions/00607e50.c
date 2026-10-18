/* speed.exe 00607e50 FUN_00607e50; analysis pseudocode, not buildable source.
 * calls 00607d40 FUN_00607d40
 */

int * FUN_00607e50(int param_1,byte param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00607d40(param_1,param_3);
  if (*piVar1 == 0) {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | '\x01' << (param_2 & 0x1f);
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

