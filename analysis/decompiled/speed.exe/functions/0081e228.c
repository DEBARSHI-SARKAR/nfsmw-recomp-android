/* speed.exe 0081e228 FUN_0081e228; analysis pseudocode, not buildable source.
 */

void FUN_0081e228(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_009c1c40) {
    puVar2 = &DAT_009c1c48;
    do {
      iVar1 = (&DAT_009c1f44)[*(ushort *)((int)puVar2 + -2)];
      if (*(short *)(puVar2 + -1) == 0) {
        (**(code **)(iVar1 + 0x58))((uint)*(ushort *)((int)puVar2 + -2));
      }
      else {
        (**(code **)(iVar1 + 0x54))(*puVar2,*(undefined4 *)(iVar1 + 0x5c));
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar3 < DAT_009c1c40);
  }
  DAT_009c1c40 = 0;
  return;
}

