/* speed.exe 00512520 FUN_00512520; analysis pseudocode, not buildable source.
 * calls 0078b010 FUN_0078b010
 * calls 0078b260 FUN_0078b260
 * calls 00735620 FUN_00735620
 * calls 00735640 FUN_00735640
 */

int FUN_00512520(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0078b260();
  if (iVar2 == 3) {
    return 0x64953698;
  }
  if (iVar2 != 1) {
    cVar1 = FUN_0078b010();
    if (cVar1 != '\0') {
      cVar1 = FUN_00735620();
      if ((cVar1 == '\0') && (DAT_00925e90 != 6)) {
        return (-(uint)((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0) & 0x80f9bc06) + 0x2177c024;
      }
      if (DAT_009b0fa0 == 0) {
        cVar1 = FUN_00735640();
        return (-(uint)(cVar1 != '\0') & 0xe78fe445) + 0xf68289c6;
      }
      if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0) {
        cVar1 = FUN_00735640();
        return (-(uint)(cVar1 != '\0') & 0x282e015b) + 0xef7cee30;
      }
      cVar1 = FUN_00735640();
      return (-(uint)(cVar1 != '\0') & 0x55f901) + 0x1754f68a;
    }
  }
  return (-(uint)((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0) & 0xb302ff4f) + 0xef6e7cdb;
}

