/* speed.exe 00453890 FUN_00453890; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00453890(int param_1,uint param_2)

{
  if (*(ushort *)(param_1 + 2) <= param_2) {
    return 0;
  }
  if (*(ushort *)(param_1 + 4) == 0) {
    return *(int *)(((*(ushort *)(param_1 + 6) & 0x8000) >> 0xc) + param_1 + 8 + param_2 * 4);
  }
  return *(ushort *)(param_1 + 4) * param_2 + 8 +
         ((*(ushort *)(param_1 + 6) & 0x8000) >> 0xc) + param_1;
}

