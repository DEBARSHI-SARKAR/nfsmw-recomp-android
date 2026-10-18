/* speed.exe 008225bd FUN_008225bd; analysis pseudocode, not buildable source.
 */

void FUN_008225bd(int param_1)

{
  if (0x2000 < *(ushort *)(param_1 + 0xe)) {
    *(undefined2 *)(param_1 + 0xe) = 0x2000;
    return;
  }
  if (*(ushort *)(param_1 + 0xe) < 0x800) {
    *(undefined2 *)(param_1 + 0xe) = 0x800;
  }
  return;
}

