/* speed.exe 0083dac0 FUN_0083dac0; analysis pseudocode, not buildable source.
 * calls 0078af30 FUN_0078af30
 * calls 007c64e0 _strncpy
 * calls 00840530 FUN_00840530
 */

undefined4 *
FUN_0083dac0(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)FUN_0078af30(0xcc);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar4 = 0x33; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    puVar1[8] = param_3;
    *puVar1 = param_1;
    puVar1[9] = param_4;
    puVar1[6] = param_5;
    puVar1[10] = 0;
    _strncpy((char *)(puVar1 + 0xf),param_2,0xf);
    *(undefined1 *)((int)puVar1 + 0x4b) = 0;
    uVar2 = FUN_00840530(param_1,1,&LAB_0083d3d0,puVar1);
    puVar1[2] = uVar2;
    uVar2 = FUN_00840530(param_1,4,&LAB_0083d780,puVar1);
    puVar1[3] = uVar2;
    uVar2 = FUN_00840530(param_1,5,FUN_0083da30,puVar1);
    puVar1[4] = uVar2;
    puVar1[5] = 0xffffffff;
    puVar3 = puVar1;
  }
  return puVar3;
}

