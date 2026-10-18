/* speed.exe 00664670 FUN_00664670; analysis pseudocode, not buildable source.
 * calls 0045c030 FUN_0045c030
 * calls 006641f0 FUN_006641f0
 * calls 0064b640 FUN_0064b640
 * calls 004655f0 FUN_004655f0
 * calls 0045c090 FUN_0045c090
 * calls 00454830 FUN_00454830
 * calls 00452720 FUN_00452720
 * calls 0045c380 FUN_0045c380
 * calls 00452880 FUN_00452880
 * calls 0065ec70 FUN_0065ec70
 * calls 00663570 FUN_00663570
 */

void FUN_00664670(void)

{
  int *piVar1;
  undefined *puVar2;
  undefined **local_c;
  undefined4 local_8;
  int local_4;
  
  local_c = &PTR_LAB_008a8998;
  puVar2 = (undefined *)0x0;
  if (DAT_009258b0 != '\0') {
    FUN_0045c030();
    puVar2 = PTR_PTR_008f7ea8;
    PTR_PTR_008f7ea8 = (undefined *)&local_c;
  }
  FUN_00452720();
  FUN_0045c090();
  FUN_0045c030();
  piVar1 = DAT_009258a8;
  *DAT_009258a8 = *DAT_009258a8 + -1;
  if (*piVar1 == 0) {
    FUN_0045c380();
    FUN_00452880(0x3c,0);
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(piVar1,0x3c,0);
  }
  DAT_009258a8 = (int *)0x0;
  local_8 = FUN_00454830("frontend.bin");
  FUN_0065ec70(&local_4,&local_8);
  if (*(int *)(local_4 + 0x10) == 0) {
    FUN_00663570(&local_4,local_4);
  }
  FUN_006641f0("frontend.vlt");
  FUN_004655f0(DAT_009258ac);
  DAT_009258ac = 0;
  if (puVar2 != (undefined *)0x0) {
    FUN_0045c030();
    PTR_PTR_008f7ea8 = puVar2;
  }
  DAT_009258b0 = 0;
  return;
}

