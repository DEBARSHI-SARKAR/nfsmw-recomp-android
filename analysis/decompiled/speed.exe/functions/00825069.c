/* speed.exe 00825069 FUN_00825069; analysis pseudocode, not buildable source.
 * calls 0081e2cb FUN_0081e2cb
 * calls 00824ff0 FUN_00824ff0
 * calls 00822050 FUN_00822050
 */

void FUN_00825069(undefined4 param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5
                 )

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  bool bVar5;
  undefined4 auStack_388 [46];
  undefined4 auStack_2d0 [27];
  undefined4 uStack_264;
  int *piStack_260;
  int iStack_25c;
  undefined4 *puStack_258;
  undefined4 uStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  undefined2 *puStack_248;
  int *piStack_244;
  undefined4 auStack_234 [46];
  undefined4 auStack_17c [45];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_50;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = (undefined2 *)param_3;
  piStack_244 = (int *)0x4;
  puStack_248 = (undefined2 *)param_3;
  uStack_24c = 0x825082;
  FUN_00822050();
  uStack_24c = 0x68;
  iStack_250 = param_4;
  uStack_254 = 0x82508d;
  FUN_00822050();
  uStack_254 = 0x1c;
  puStack_258 = param_5;
  iStack_25c = 0x825098;
  FUN_00822050();
  iStack_25c = param_4;
  piStack_260 = (int *)0x82509e;
  FUN_0081e2cb();
  local_bc = 0;
  local_18 = param_2 + 8;
  piStack_260 = &local_18;
  local_c8 = 1;
  local_c0 = 48000;
  local_50 = 10;
  uStack_264 = 0x8250c9;
  iVar3 = FUN_00824ff0();
  if (iVar3 != 0) {
    param_3 = (undefined4 *)(param_4 + 0x58);
    do {
      iVar3 = local_14;
      if (local_14 < 0x2b) {
        bVar5 = local_14 == 0x14;
        auStack_234[local_14] = local_10;
        uVar2 = local_c;
        auStack_17c[iVar3] = local_c;
        if (bVar5) {
          param_3[-4] = uVar2;
          *param_3 = local_8;
          param_3 = param_3 + 1;
        }
      }
      else if ((local_14 < 0x80) || (0xad < local_14)) {
        if (local_14 == 0xfe) break;
      }
      else {
        auStack_2d0[local_14] = local_10;
        auStack_388[iVar3] = local_c;
      }
      piStack_244 = &local_18;
      puStack_248 = (undefined2 *)0x825144;
      iVar3 = FUN_00824ff0();
    } while (iVar3 != 0);
  }
  *(undefined1 *)(puVar1 + 1) = (undefined1)local_c8;
  *(undefined1 *)((int)puVar1 + 3) = (undefined1)local_50;
  *puVar1 = (undefined2)local_c0;
  *param_5 = local_bc;
  iVar3 = 0;
  *(undefined2 *)(param_4 + 8) = 4;
  *(undefined1 *)(param_4 + 7) = 2;
  if (*(char *)(puVar1 + 1) != '\0') {
    puVar4 = (undefined2 *)(param_4 + 0xc);
    do {
      *puVar4 = *(undefined2 *)((int)&DAT_009c21f4 + (iVar3 + (uint)*(byte *)(puVar1 + 1) * 6) * 2);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(puVar1 + 1));
  }
  return;
}

