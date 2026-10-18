/* speed.exe 0053f560 FUN_0053f560; analysis pseudocode, not buildable source.
 * calls 00598390 FUN_00598390
 * calls 00516af0 FUN_00516af0
 * calls 00837090 FUN_00837090
 * calls 0056c6e0 FUN_0056c6e0
 * calls 00516b90 FUN_00516b90
 * calls 005b07f0 FUN_005b07f0
 * calls 005258b0 FUN_005258b0
 * calls 0078c730 FUN_0078c730
 * calls 0078b260 FUN_0078b260
 */

void __thiscall FUN_0053f560(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0053f5e6;
  iVar2 = FUN_0078b260();
  if (iVar2 != 0) goto LAB_0053f5e6;
  iVar2 = FUN_00598390(*(undefined4 *)(param_1 + 0x2c));
  if (iVar2 == 0) {
LAB_0053f5a9:
    FUN_0056c6e0(*(undefined4 *)(param_1 + 0x2c));
    FUN_005258b0(1);
  }
  else {
    cVar1 = FUN_00516b90(*(undefined4 *)(iVar2 + 0x10));
    if (cVar1 == '\0') goto LAB_0053f5a9;
    FUN_0056c6e0(*(undefined4 *)(param_1 + 0x2c));
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar3 = FUN_00516af0(*(undefined4 *)(param_1 + 0x10));
  FUN_005b07f0(uVar3,1);
LAB_0053f5e6:
  if (param_2 != '\0') {
    iVar2 = FUN_0078c730();
    if (*(int *)(iVar2 + 0xfc) == 1) {
      iVar2 = FUN_0078c730();
      if (*(int *)(iVar2 + 0xf8) != 0) {
        iVar2 = FUN_0078c730();
        FUN_00837090(*(undefined4 *)(iVar2 + 0xf8));
      }
    }
  }
  return;
}

