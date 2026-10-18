/* speed.exe 004b92c0 FUN_004b92c0; analysis pseudocode, not buildable source.
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

undefined4 * __fastcall FUN_004b92c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_8;
  int local_4;
  
  *param_1 = &PTR_FUN_00896f80;
  _eh_vector_constructor_iterator_(param_1 + 0x11,0x1c,6,FUN_004b0280,FUN_004b02a0);
  local_8 = param_1 + 0x3d;
  puVar4 = param_1 + 0x3b;
  puVar1 = param_1 + 0x14;
  puVar3 = param_1 + 0xb;
  local_4 = 2;
  do {
    iVar2 = 0;
    do {
      *puVar3 = 0;
      puVar1[-2] = 0x3dcccccd;
      *puVar1 = 0x3f800000;
      puVar1[-1] = 0x3f800000;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      puVar1[2] = 0x3f800000;
      puVar1[-3] = 0;
      *(undefined1 *)((int)puVar4 + iVar2) = 0;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 7;
    } while (iVar2 < 3);
    *local_8 = 0xffffffff;
    local_8 = local_8 + 1;
    puVar4 = (undefined4 *)((int)puVar4 + 3);
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  param_1[0x3f] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  return param_1;
}

