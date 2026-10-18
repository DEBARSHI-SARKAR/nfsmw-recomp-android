/* speed.exe 006ff350 FUN_006ff350; analysis pseudocode, not buildable source.
 * calls 004b21b0 FUN_004b21b0
 */

void FUN_006ff350(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = DAT_00925ae8;
  if ((&DAT_0099222c)[param_2] != 0) {
    if (*(int *)((&DAT_0099222c)[param_2] + 0x2c) != 0) {
      cVar2 = FUN_004b21b0();
      if (cVar2 != '\0') goto LAB_006ff38d;
    }
    *param_1 = *(undefined4 *)((&DAT_0099222c)[param_2] + 0x40);
    return;
  }
LAB_006ff38d:
  *param_1 = uVar1;
  return;
}

