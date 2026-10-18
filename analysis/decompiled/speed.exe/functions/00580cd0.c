/* speed.exe 00580cd0 FUN_00580cd0; analysis pseudocode, not buildable source.
 */

undefined4 * __fastcall FUN_00580cd0(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  pcVar1 = (char *)(param_1 + 0x1134);
  do {
    if (*pcVar1 == -1) {
      param_1 = iVar3 * 0x198 + param_1;
      puVar4 = (undefined4 *)(param_1 + 4000);
      for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = 0xffff;
      *(undefined4 *)(param_1 + 0x10b8) = 0;
      *(undefined4 *)(param_1 + 0x10bc) = 0;
      *(undefined4 *)(param_1 + 0x10c0) = 0;
      *(undefined4 *)(param_1 + 0x10c4) = 0;
      *(undefined4 *)(param_1 + 0x10c8) = 0;
      *(undefined4 *)(param_1 + 0x10cc) = 0;
      *(undefined4 *)(param_1 + 0x10d0) = 0;
      *(undefined4 *)(param_1 + 0x10d4) = 0;
      *(undefined4 *)(param_1 + 0x10d4) = 0;
      puVar4 = (undefined4 *)(param_1 + 0x10d8);
      for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(param_1 + 0x112c) = 0;
      *(undefined4 *)(param_1 + 0x1130) = 0;
      *(char *)(param_1 + 0x1134) = (char)iVar3;
      return (undefined4 *)(param_1 + 4000);
    }
    iVar3 = iVar3 + 1;
    pcVar1 = pcVar1 + 0x198;
  } while (iVar3 < 0x4b);
  return (undefined4 *)0x0;
}

