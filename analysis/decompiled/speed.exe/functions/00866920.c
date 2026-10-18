/* speed.exe 00866920 FUN_00866920; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00866920(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((-1 < DAT_0090d510) && (DAT_0090d510 < DAT_009c5068)) &&
     (iVar1 = DAT_0090d510 * 0xc, iVar1 != -0x9c5008)) {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x9c500c) + 0xc))
                      (*(undefined4 *)(iVar1 + 0x9c5010),param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

