/* speed.exe 00546360 FUN_00546360; analysis pseudocode, not buildable source.
 * calls 0052b4d0 FUN_0052b4d0
 * calls 00525220 FUN_00525220
 * calls 00571e80 FUN_00571e80
 * calls 0051db20 FUN_0051db20
 */

void __fastcall FUN_00546360(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((char)param_1[0x52] == '\0') {
    iVar2 = param_1[4];
    uVar3 = 0x6c839fbe;
  }
  else {
    iVar2 = param_1[4];
    uVar3 = 0x376eb982;
  }
  FUN_00525220(iVar2,0x863404b5,uVar3);
  if (*(int *)(DAT_0091e000 + 0x1964) == 1) {
    FUN_0051db20();
  }
  else {
    FUN_0052b4d0();
  }
  uVar1 = FUN_00571e80(param_1[4]);
  if (*(char *)((int)param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x47) = 0;
    *(undefined1 *)((int)param_1 + 0x119) = 1;
    *(undefined1 *)((int)param_1 + 0x11a) = 0;
    param_1[0x44] = 0;
  }
  (**(code **)(param_1[0xb] + 0x40))(uVar1);
                    /* WARNING: Could not recover jumptable at 0x005463f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}

