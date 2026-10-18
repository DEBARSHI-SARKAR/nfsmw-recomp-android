/* speed.exe 00777660 FUN_00777660; analysis pseudocode, not buildable source.
 * calls 00765c30 FUN_00765c30
 * calls 0076f4a0 FUN_0076f4a0
 * calls 0076f140 FUN_0076f140
 * calls 0076ec70 FUN_0076ec70
 * calls 007753e0 FUN_007753e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00777660(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  
  if (param_2 != param_1) {
    *(undefined2 *)(param_1 + 0x8e) = *(undefined2 *)(param_2 + 0x8e);
    *(undefined1 *)(param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    uVar2 = *(undefined1 *)(param_2 + 0x2c1);
    *(undefined1 *)(param_1 + 0x2c3) = uVar2;
    *(undefined1 *)(param_1 + 0x2c1) = uVar2;
    uVar1 = *(undefined4 *)(param_2 + 0x2c4);
    *(undefined4 *)(param_1 + 0x2c4) = uVar1;
    *(undefined4 *)(param_1 + 0x2cc) = uVar1;
    *(undefined4 *)(param_1 + 0x2c8) = uVar1;
    *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
    if (param_3 != '\0') {
      fVar4 = _DAT_0089096c - *(float *)(param_1 + 0x90);
      *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) ^ 1;
      *(float *)(param_1 + 0x90) = fVar4;
    }
    iVar5 = *(short *)(param_1 + 0x8e) * 0x16 + DAT_009b38c0;
    FUN_0076f4a0(iVar5,uVar1,0);
    FUN_0076f4a0(iVar5,uVar1,1);
    FUN_0076f140(iVar5,1);
    FUN_0076f140(iVar5,0);
    FUN_00765c30(iVar5);
    FUN_007753e0(iVar5);
    puVar3 = *(undefined4 **)(param_1 + 8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_0076ec70(0x40400000);
  }
  return;
}

