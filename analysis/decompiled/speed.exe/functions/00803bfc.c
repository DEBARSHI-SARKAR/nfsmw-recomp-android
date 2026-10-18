/* speed.exe 00803bfc FUN_00803bfc; analysis pseudocode, not buildable source.
 * calls 00801d16 FUN_00801d16
 * calls 00803b27 FUN_00803b27
 * calls 0080399d FUN_0080399d
 */

void FUN_00803bfc(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1[10];
  for (uVar1 = param_1[0x23] & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  if (1 < *param_1) {
    FUN_00801d16(param_1);
  }
  if (*param_1 < 5) {
    FUN_0080399d(param_1,param_2,param_3,0);
    FUN_0080399d(param_1,param_2,param_3,1);
    FUN_0080399d(param_1,param_2,param_3,2);
  }
  else {
    FUN_00803b27(param_1,param_1[0x26],0,param_1[0x24],param_1[0x25],param_1[0x1e] + param_2,
                 param_1[0x1e] + param_3,DAT_009c67f0);
    FUN_00803b27(param_1,param_1[0x27],0,(uint)param_1[0x24] >> 1,(uint)param_1[0x25] >> 1,
                 param_1[0x1f] + param_2,param_1[0x1f] + param_3,DAT_009c67e8);
    FUN_00803b27(param_1,param_1[0x27],0,(uint)param_1[0x24] >> 1,(uint)param_1[0x25] >> 1,
                 param_1[0x20] + param_2,param_1[0x20] + param_3,DAT_009c67e8);
  }
  return;
}

