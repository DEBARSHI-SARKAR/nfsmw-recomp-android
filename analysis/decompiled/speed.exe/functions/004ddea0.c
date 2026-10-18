/* speed.exe 004ddea0 FUN_004ddea0; analysis pseudocode, not buildable source.
 * calls 004b8db0 FUN_004b8db0
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 008311aa FUN_008311aa
 * calls 00831a8a FUN_00831a8a
 */

void __fastcall FUN_004ddea0(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cc6b;
  local_c = ExceptionList;
  if (param_1[10] == 0) {
    ExceptionList = &local_c;
    local_10 = param_1;
    FUN_004b8db0(param_1);
    piVar2 = (int *)FUN_00831667(0x28);
    local_4 = 0;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      uVar3 = (uint)*(byte *)(param_1 + 0xd);
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      else if (0xf < uVar3) {
        uVar3 = 0xf;
      }
      puVar1 = (uint *)(piVar2 + 1);
      *puVar1 = uVar3;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2[6] = 25000;
      piVar2[7] = 0;
      piVar2[8] = 0x7fff;
      piVar2[9] = 0;
      local_10 = piVar2;
      iVar4 = FUN_00831a8a(&DAT_009148d4,puVar1,piVar2);
      if (iVar4 < 0) {
        FUN_0083198b(&PTR_s_FX_TRAFFIC_008f02a8);
        FUN_00831a8a(&DAT_009148d4,puVar1,piVar2);
      }
    }
    param_1[10] = (int)piVar2;
    local_4 = 0xffffffff;
    local_10 = (int *)0x0;
    if (*piVar2 != 0) {
      FUN_008311aa(&local_10);
    }
    param_1[0xc] = (int)local_10;
    (**(code **)(*(int *)param_1[0xb] + 0x38))(*(int *)(param_1[5] + 0x34) + 0x40);
    (**(code **)(*(int *)param_1[0xb] + 0x3c))(*(int *)(param_1[5] + 0x34) + 0x10);
    (**(code **)(*(int *)param_1[0xb] + 0x40))(*(int *)(param_1[5] + 0x34) + 0x50);
  }
  ExceptionList = local_c;
  return;
}

