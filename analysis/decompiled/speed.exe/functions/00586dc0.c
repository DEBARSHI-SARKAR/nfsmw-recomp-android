/* speed.exe 00586dc0 FUN_00586dc0; analysis pseudocode, not buildable source.
 * calls 00515520 FUN_00515520
 * calls 00514fd0 FUN_00514fd0
 */

void __fastcall FUN_00586dc0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 8) + -4;
    }
    local_20 = *(float *)(iVar3 + 0x1c);
    fVar1 = *(float *)(iVar3 + 0x18);
    local_4 = *(float *)(iVar3 + 0x24);
    local_8 = *(float *)(iVar3 + 0x20);
    local_18 = local_20 + *(float *)(param_1 + 0x9c);
    local_1c = fVar1 + *(float *)(param_1 + 0x98);
    local_10 = fVar1;
    local_c = local_20;
    while( true ) {
      if (param_1 == -8) {
        iVar2 = 0;
      }
      else {
        iVar2 = param_1 + 4;
      }
      if (iVar3 == iVar2) break;
      local_c = *(float *)(iVar3 + 0x1c);
      local_10 = *(float *)(iVar3 + 0x18);
      local_4 = *(float *)(iVar3 + 0x24);
      local_8 = *(float *)(iVar3 + 0x20);
      if (local_c <= local_20) {
        local_20 = local_c;
      }
      if (local_18 <= local_4 + local_c) {
        local_18 = local_4 + local_c;
      }
      if (local_10 <= fVar1) {
        fVar1 = local_10;
      }
      if (local_1c <= local_8 + local_10) {
        local_1c = local_8 + local_10;
      }
      if (*(int *)(iVar3 + 4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 4) + -4;
      }
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      FUN_00514fd0(*(int *)(param_1 + 0xb0),&local_10,&local_c);
      FUN_00515520(*(undefined4 *)(param_1 + 0xb0),&local_8,&local_4);
      if (local_c <= local_20) {
        local_20 = local_c;
      }
      if (local_18 <= local_4 + local_c) {
        local_18 = local_4 + local_c;
      }
      if (local_10 <= fVar1) {
        fVar1 = local_10;
      }
      if (local_1c <= local_8 + local_10) {
        local_1c = local_8 + local_10;
      }
    }
    *(float *)(param_1 + 0x90) = fVar1;
    *(float *)(param_1 + 0x94) = local_20;
    *(float *)(param_1 + 0x98) = ABS(local_1c - fVar1);
    *(float *)(param_1 + 0x9c) = ABS(local_18 - local_20);
  }
  return;
}

