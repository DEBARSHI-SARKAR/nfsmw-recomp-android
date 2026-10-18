/* speed.exe 0065fb50 FUN_0065fb50; analysis pseudocode, not buildable source.
 * calls 0065ea80 FUN_0065ea80
 * calls 0065eb90 FUN_0065eb90
 */

void FUN_0065fb50(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar2 = param_1;
  iVar1 = DAT_00925980;
  if (param_1 != 0) {
    FUN_0065eb90(&local_4,&param_1);
    if (local_4 != *(int *)(iVar1 + 0x14)) {
      FUN_0065ea80(iVar2,param_2);
    }
  }
  return;
}

