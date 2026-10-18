/* speed.exe 00586290 FUN_00586290; analysis pseudocode, not buildable source.
 * calls 00572ed0 FUN_00572ed0
 * calls 00516c90 FUN_00516c90
 * calls 005251a0 FUN_005251a0
 * calls 00516b50 FUN_00516b50
 * calls 00515bb0 FUN_00515bb0
 * calls 004c2340 FUN_004c2340
 * calls 00460d20 FUN_00460d20
 */

undefined4 * __thiscall FUN_00586290(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_008a0b98;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = *param_2;
  param_1[6] = param_2[1];
  param_1[7] = param_2[2];
  uVar2 = *param_2;
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_004c2340(1,uVar2);
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_00572ed0();
  *(byte *)(param_1 + 3) = ~(byte)(*(uint *)(DAT_0091cf90 + 300) >> 6) & 1;
  if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) != 0) && (1 < *(int *)(DAT_0091cf90 + 0x19c))) {
    FUN_00516c90(0x41aaf577,param_1[4],0);
  }
  uVar2 = FUN_005251a0(param_1[4],0x6b364f8b,0x5bc);
  FUN_00515bb0(uVar2);
  uVar2 = FUN_005251a0(param_1[4],0x79354351,0x682);
  FUN_00515bb0(uVar2);
  uVar2 = FUN_005251a0(param_1[4],0x1bb3c514,0x1bb3c514);
  FUN_00515bb0(uVar2);
  iVar3 = FUN_00460d20(param_1[4],"InGameDialog.fng");
  if (iVar3 != 0) {
    iVar3 = FUN_00460d20(param_1[4],"OL_Dialog.fng");
    if (iVar3 != 0) {
      iVar3 = FUN_00460d20(param_1[4],"ControllerUnplugged.fng");
      if (iVar3 != 0) {
        iVar3 = FUN_00460d20(param_1[4],"Dialog.fng");
        if (iVar3 != 0) {
          iVar3 = FUN_00460d20(param_1[4],"EA_Trax.fng");
          if (iVar3 != 0) {
            iVar3 = FUN_00460d20(param_1[4],"OL_Dialog_Stacked_Buttons.fng");
            if (iVar3 != 0) {
              iVar3 = FUN_00460d20(param_1[4],"OL_GameRoom_Car_Select.fng");
              if (iVar3 != 0) {
                iVar3 = FUN_00460d20(param_1[4],"OL_GameRoom_Edit_Race.fng");
                if (iVar3 != 0) {
                  iVar3 = FUN_00460d20(param_1[4],"OL_GameRoom_Player_Details.fng");
                  if (iVar3 != 0) {
                    iVar3 = FUN_00460d20(param_1[4],"OL_EAMessenger.fng");
                    if (iVar3 != 0) {
                      cVar1 = FUN_00516b50("OL_EAMessenger.fng");
                      if (cVar1 == '\0') {
                        DAT_0091d268 = param_1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return param_1;
}

