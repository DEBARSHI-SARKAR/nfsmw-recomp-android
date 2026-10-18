/* speed.exe 004670b0 FUN_004670b0; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 00444fe0 FUN_00444fe0
 * calls 004624a0 FUN_004624a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004670b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_b0 [12];
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 local_68 [16];
  undefined1 local_28 [36];
  
  if (DAT_00926120 == 0) {
    local_70 = &DAT_00911190;
    local_6c = 0;
    FUN_00444fe0(local_b0,param_1);
    local_80 = local_80 * _DAT_00890fc8;
    local_74 = 0x3f800000;
    local_7c = local_7c * _DAT_00890fc8;
    local_78 = local_78 * _DAT_00890fc8;
    puVar2 = local_b0;
    puVar3 = local_68;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00460c70(local_28,param_2);
    FUN_004624a0("JR2Server",1,&local_70,0x60);
  }
  return;
}

