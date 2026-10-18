/* speed.exe 00837720 FUN_00837720; analysis pseudocode, not buildable source.
 * calls 00848200 FUN_00848200
 * calls 00847b60 FUN_00847b60
 */

undefined4 FUN_00837720(int param_1,undefined4 param_2,ushort param_3)

{
  ushort uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == 5) {
    return 0xffffff92;
  }
  iVar2 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
  if (iVar2 != 0) {
    iVar2 = FUN_00848200(*(undefined4 *)(param_1 + 8),param_2);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x100), iVar2 != 0)) {
      uVar1 = *(ushort *)(iVar2 + 10);
      *(ushort *)(iVar2 + 10) = ~param_3 & uVar1;
      if ((param_3 & uVar1) != 0) {
        *(undefined4 *)(param_1 + 0x3c) = 1;
        if (*(code **)(param_1 + 0x24) != (code *)0x0) {
          (**(code **)(param_1 + 0x24))(param_1,5,0,*(undefined4 *)(param_1 + 0x20));
        }
      }
    }
  }
  return 0;
}

