/* speed.exe 00866990 FUN_00866990; analysis pseudocode, not buildable source.
 */

void FUN_00866990(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((-1 < DAT_0090d510) && (DAT_0090d510 < DAT_009c5068)) &&
     (iVar1 = DAT_0090d510 * 0xc, iVar1 != -0x9c5008)) {
    (**(code **)(*(int *)(iVar1 + 0x9c500c) + 0x14))
              (*(undefined4 *)(iVar1 + 0x9c5010),param_1,param_2);
  }
  return;
}

