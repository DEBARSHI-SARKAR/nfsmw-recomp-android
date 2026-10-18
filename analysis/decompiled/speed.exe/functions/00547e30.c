/* speed.exe 00547e30 FUN_00547e30; analysis pseudocode, not buildable source.
 * calls 00593560 FUN_00593560
 * calls 005e3980 FUN_005e3980
 * calls 00588250 FUN_00588250
 * calls 005dc950 FUN_005dc950
 * calls 00601060 FUN_00601060
 * calls 005dcf70 thunk_FUN_005da7a0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 0051f120 FUN_0051f120
 * calls 005dca70 FUN_005dca70
 * calls 00593880 FUN_00593880
 * calls 00546400 FUN_00546400
 * calls 005fb710 FUN_005fb710
 */

void __fastcall FUN_00547e30(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint local_4;
  
  FUN_00593880();
  if (*(char *)(param_1 + 0x1b5) == '\0') {
    local_4 = (uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
    uVar6 = FUN_005dc950();
    if (local_4 <= uVar6) {
      do {
        iVar2 = FUN_005e3980(local_4);
        if (iVar2 != 0) {
          uVar6 = 0;
          iVar2 = thunk_FUN_005da7a0();
          if (iVar2 != 0) {
            do {
              uVar3 = FUN_00601060(uVar6);
              uVar3 = FUN_005fb710(uVar3);
              cVar1 = FUN_0051f120(uVar3);
              if (cVar1 != '\0') {
                iVar2 = FUN_0045d3a0(0);
                iVar2 = FUN_00588250(iVar2 + -1);
                *(undefined1 *)(iVar2 + 0x16) = 0;
              }
              uVar6 = uVar6 + 1;
              uVar5 = thunk_FUN_005da7a0();
            } while (uVar6 < uVar5);
          }
        }
        local_4 = local_4 + 1;
        uVar6 = FUN_005dc950();
      } while (local_4 <= uVar6);
    }
  }
  else {
    FUN_005e3980(DAT_0091ca3c);
    uVar6 = 0;
    iVar2 = thunk_FUN_005da7a0();
    if (iVar2 != 0) {
      do {
        uVar3 = FUN_00601060(uVar6);
        uVar4 = FUN_005fb710(uVar3);
        cVar1 = FUN_0051f120(uVar4);
        if (cVar1 != '\0') {
          iVar2 = FUN_0045d3a0(0);
          iVar2 = FUN_00588250(iVar2 + -1);
          *(undefined1 *)(iVar2 + 0x16) = 0;
          cVar1 = FUN_005dca70(uVar3,2);
          if (cVar1 != '\0') {
            iVar2 = FUN_0045d3a0(0);
            iVar2 = FUN_00588250(iVar2 + -1);
            *(undefined1 *)(iVar2 + 0x17) = 1;
          }
        }
        uVar6 = uVar6 + 1;
        uVar5 = thunk_FUN_005da7a0();
      } while (uVar6 < uVar5);
    }
  }
  *(undefined4 *)(param_1 + 0x54) = 0x9ba78ba2;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_00546400(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x18),*(undefined4 *)(param_1 + 0x1b0),0
                 ,0);
  }
  FUN_00593560(0);
                    /* WARNING: Could not recover jumptable at 0x00547fe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
  return;
}

