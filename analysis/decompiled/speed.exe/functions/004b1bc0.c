/* speed.exe 004b1bc0 FUN_004b1bc0; analysis pseudocode, not buildable source.
 * calls 004ab000 FUN_004ab000
 * calls 00709f00 FUN_00709f00
 */

void FUN_004b1bc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((char)param_3 == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
  }
  iVar1 = FUN_00709f00(iVar1 + 0x40,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_004ab000(param_1,param_3);
  return;
}

