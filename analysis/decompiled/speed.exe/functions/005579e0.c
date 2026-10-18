/* speed.exe 005579e0 FUN_005579e0; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 00515e20 FUN_00515e20
 * calls 0054c850 FUN_0054c850
 * calls 005257f0 FUN_005257f0
 * calls 00516af0 FUN_00516af0
 * calls 00598970 FUN_00598970
 * calls 0054c7e0 FUN_0054c7e0
 * calls 005142b0 FUN_005142b0
 * calls 0056bc10 FUN_0056bc10
 * calls 00598bb0 FUN_00598bb0
 * calls 00516c70 FUN_00516c70
 * calls 0053fb30 FUN_0053fb30
 * calls 0078c730 FUN_0078c730
 * calls 0054c570 FUN_0054c570
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005579e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_208;
  undefined4 local_207;
  
  switch(*(undefined4 *)(*(int *)(param_1 + 0x58) + 0x18)) {
  case 0:
    if (_DAT_008f42c0 <= (float)(DAT_00925b14 - DAT_0091d4a8) * _DAT_00890984) {
      FUN_005257f0("OLX_Message.fng",0,0,0);
      return;
    }
    break;
  case 1:
    if (((_DAT_0091c390 & 0x400000) == 0) && (DAT_0091c344 == 0)) {
      FUN_0054c850();
      return;
    }
    if (DAT_0091c358 != 0) {
      FUN_0053fb30();
      return;
    }
    DAT_0091ca90 = 1;
    return;
  case 3:
    if (DAT_0091c358 != 0) {
      iVar3 = FUN_0078c730();
      if ((*(char *)(iVar3 + 0x968) != '\0') &&
         (iVar3 = FUN_00516af0(PTR_s_OL_GameRoom_fng_008f32b0), iVar3 == 0)) {
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        uVar1 = FUN_0056bc10(0x713b9c46);
        FUN_00598970(uVar2,&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,uVar1);
        return;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar1 = FUN_0056bc10(0xcd787311);
      FUN_00598bb0(uVar2,&DAT_00890978,1,0x70e01038,0x417b25e4,5,0xffffffff,0xffffffff,1,uVar1);
      return;
    }
    if (DAT_0091c360 != 0) {
      FUN_0054c7e0();
      return;
    }
    if (DAT_0091c35c != 0) {
      FUN_005142b0();
      return;
    }
    if (DAT_0091c370 == 0) {
      FUN_0054c570(&DAT_0091c39c);
      return;
    }
    break;
  case 4:
    FUN_00460c70(s_PlraQlraRlraSlraotherplayer_008f3300 + 0x10,&DAT_0091c39c);
    DAT_0091ca88 = 1;
    FUN_005257f0("OL_Rankings_Personal_Overlay.fng",0,0,0);
    return;
  case 5:
    if (DAT_0091c370 != 0) {
      local_208 = 0;
      puVar4 = &local_207;
      for (iVar3 = 0x7f; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = 0;
      *(undefined1 *)((int)puVar4 + 2) = 0;
      uVar2 = FUN_0056bc10(0x121f05d4,&DAT_0091c39c);
      FUN_00515e20(&local_208,0x200,uVar2);
      FUN_00598bb0(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x70e01038,0x417b25e4,9,
                   0xffffffff,0xffffffff,1,&local_208);
      return;
    }
    if (DAT_0091c35c != 0) {
      uVar2 = FUN_00516af0(*(undefined4 *)(param_1 + 0x10));
      FUN_00516c70(10,uVar2);
      return;
    }
    local_208 = 0;
    puVar4 = &local_207;
    for (iVar3 = 0x7f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    uVar2 = FUN_0056bc10(0x8d0a8371,&DAT_0091c39c);
    FUN_00515e20(&local_208,0x200,uVar2);
    FUN_00598bb0(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x70e01038,0x417b25e4,8,0xffffffff,
                 0xffffffff,1,&local_208);
    return;
  case 6:
    FUN_005257f0("OL_Feedback.fng",0,0,0);
    *(undefined1 *)(param_1 + 0xf5) = 1;
  }
  return;
}

