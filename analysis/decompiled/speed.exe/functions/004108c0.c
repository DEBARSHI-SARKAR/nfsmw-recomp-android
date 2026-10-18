/* speed.exe 004108c0 FUN_004108c0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00410460 FUN_00410460
 * calls 0045be30 FUN_0045be30
 * calls 00452430 FUN_00452430
 * calls 00403b70 FUN_00403b70
 * calls 0045a430 FUN_0045a430
 * calls 0045da70 FUN_0045da70
 * calls 00454810 FUN_00454810
 */

void __thiscall FUN_004108c0(int param_1,float *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867ac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00452430();
  if (param_2 != (float *)iVar1) {
    uVar2 = FUN_00410460(param_2,0,0);
    local_4 = 0;
    FUN_0045be30(uVar2);
    local_4 = 0xffffffff;
    FUN_0045a430();
    param_2 = (float *)(param_1 + 100);
    *param_2 = 0.0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    uVar3 = FUN_00403b70();
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        if (9 < uVar4) {
          ExceptionList = local_c;
          return;
        }
        iVar1 = FUN_00454810(0x94e3c795,uVar4);
        if (iVar1 == 0) {
          iVar1 = FUN_006269b0(0x18);
        }
        fVar5 = (float10)FUN_0045da70(0x3f800000);
        *param_2 = (float)(fVar5 * (float10)*(float *)(iVar1 + 0xc));
        uVar4 = uVar4 + 1;
        param_2 = param_2 + 1;
      } while (uVar4 < uVar3);
    }
  }
  ExceptionList = local_c;
  return;
}

