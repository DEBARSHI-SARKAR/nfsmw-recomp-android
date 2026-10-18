/* speed.exe 00763960 FUN_00763960; analysis pseudocode, not buildable source.
 * calls 006e95e0 FUN_006e95e0
 */

void __fastcall FUN_00763960(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar3 = 0;
    if (*(char *)(param_1 + 9) != '\0') {
      do {
        iVar1 = *(ushort *)(param_1 + 2) + 0x10 + (uint)*(ushort *)(param_1 + 6) + param_1;
        local_4 = *(undefined4 *)(iVar1 + iVar3 * 4);
        uVar2 = FUN_006e95e0(&local_4);
        *(undefined4 *)(iVar1 + iVar3 * 4) = uVar2;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(byte *)(param_1 + 9));
    }
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}

