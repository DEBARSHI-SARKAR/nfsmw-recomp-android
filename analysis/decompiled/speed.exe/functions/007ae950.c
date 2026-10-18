/* speed.exe 007ae950 FUN_007ae950; analysis pseudocode, not buildable source.
 * calls 00593560 FUN_00593560
 * calls 005e3980 FUN_005e3980
 * calls 00588250 FUN_00588250
 * calls 00593880 FUN_00593880
 * calls 005fab40 FUN_005fab40
 * calls 00576a20 FUN_00576a20
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00576790 FUN_00576790
 * calls 005dca70 FUN_005dca70
 * calls 007a4590 FUN_007a4590
 * calls 00601060 FUN_00601060
 * calls 007ae8a0 FUN_007ae8a0
 * calls 005fb710 FUN_005fb710
 * calls 005dcf70 thunk_FUN_005da7a0
 * calls 0056e2b0 FUN_0056e2b0
 */

void __fastcall FUN_007ae950(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_c;
  
  FUN_00593880();
  FUN_005e3980(0x13);
  local_c = 0;
  iVar2 = thunk_FUN_005da7a0();
  if (iVar2 != 0) {
    do {
      uVar3 = FUN_00601060(local_c);
      uVar4 = FUN_005fb710(uVar3);
      iVar2 = FUN_0056e2b0();
      if (iVar2 == 0) {
        uVar5 = FUN_005fab40();
        cVar1 = FUN_00576a20(uVar5);
        if (cVar1 != '\0') {
          uVar5 = FUN_005fab40(0);
          cVar1 = FUN_00576790(1,uVar5);
          FUN_007ae8a0(uVar4);
          iVar2 = FUN_0045d3a0(0);
          iVar2 = FUN_00588250(iVar2 + -1);
          *(bool *)(iVar2 + 0x16) = cVar1 == '\0';
          cVar1 = FUN_005dca70(uVar3,1);
          if (cVar1 != '\0') {
            iVar2 = FUN_0045d3a0(0);
            iVar2 = FUN_00588250(iVar2 + -1);
            *(undefined1 *)(iVar2 + 0x17) = 1;
          }
        }
      }
      else {
        cVar1 = FUN_007a4590(uVar4);
        if (cVar1 != '\0') {
          FUN_007ae8a0(uVar4);
        }
      }
      local_c = local_c + 1;
      uVar6 = thunk_FUN_005da7a0();
    } while (local_c < uVar6);
  }
  *(undefined4 *)(param_1 + 0x54) = 0x790ce49;
  FUN_00593560(0);
                    /* WARNING: Could not recover jumptable at 0x007aea87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
  return;
}

