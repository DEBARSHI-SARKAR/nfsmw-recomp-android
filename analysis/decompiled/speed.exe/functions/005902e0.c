/* speed.exe 005902e0 FUN_005902e0; analysis pseudocode, not buildable source.
 * calls 00581c20 FUN_00581c20
 */

int __fastcall FUN_005902e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 8);
  iVar2 = 200;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[-2] = 0xffffffff;
    *(undefined1 *)(puVar1 + 2) = 0xff;
    *(undefined1 *)((int)puVar1 + 9) = 0xff;
    puVar1[1] = 0;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 0x4b;
  do {
    FUN_00581c20();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 0x19;
  puVar1 = (undefined4 *)(param_1 + 0x8750);
  do {
    puVar1[-4] = 0;
    puVar1[-3] = 0;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    iVar2 = iVar2 + -1;
    puVar1[3] = 0;
    puVar1 = puVar1 + 0xe;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x8ca8) = 0;
  *(undefined4 *)(param_1 + 0x8cac) = 0;
  *(undefined4 *)(param_1 + 0x8cb0) = 0;
  *(undefined4 *)(param_1 + 0x8cb4) = 0;
  *(undefined4 *)(param_1 + 0x8cb8) = 0;
  *(undefined4 *)(param_1 + 0x8cbc) = 0;
  *(undefined4 *)(param_1 + 0x8cc0) = 0;
  *(undefined4 *)(param_1 + 0x8cc4) = 0;
  return param_1;
}

