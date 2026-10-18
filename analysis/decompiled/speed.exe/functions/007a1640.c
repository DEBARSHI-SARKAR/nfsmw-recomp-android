/* speed.exe 007a1640 FUN_007a1640; analysis pseudocode, not buildable source.
 * calls 0078c380 FUN_0078c380
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0083f690 FUN_0083f690
 * calls 007a1400 FUN_007a1400
 * calls 0078c240 FUN_0078c240
 * calls 007a0320 FUN_007a0320
 * calls 0079f090 FUN_0079f090
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void FUN_007a1640(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_228;
  undefined1 local_218 [4];
  undefined2 local_214;
  char local_212;
  undefined1 local_210 [528];
  
  if (0 < DAT_009b4220) {
    FUN_0079f090();
    iVar1 = FUN_0078c240();
    local_228 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = FUN_0078c380(local_228);
        if (*(int *)(iVar2 + 0x88) == 3) {
          while (iVar3 = *(int *)(iVar2 + 0x9c), iVar3 != 0) {
            FUN_007ec1bd();
            InterlockedIncrement((LONG *)&DAT_009b42d4);
            iVar3 = FUN_0083f690(iVar3,local_218,1);
            InterlockedDecrement((LONG *)&DAT_009b42d4);
            FUN_007ec1c8();
            if (iVar3 == 0) break;
            FUN_007a1400(local_228,local_210,local_214,local_212 == '\x05');
          }
        }
        local_228 = local_228 + 1;
      } while (local_228 < iVar1);
    }
    FUN_007a0320();
  }
  return;
}

