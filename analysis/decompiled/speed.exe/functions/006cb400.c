/* speed.exe 006cb400 FUN_006cb400; analysis pseudocode, not buildable source.
 * calls 006cba70 FUN_006cba70
 * calls 007ec67e FUN_007ec67e
 * calls 006cbb70 FUN_006cbb70
 * calls 00460d20 FUN_00460d20
 * calls 004652a0 FUN_004652a0
 * calls 007ec1f9 FUN_007ec1f9
 * calls 00462420 FUN_00462420
 * calls 007f3a72 FUN_007f3a72
 * calls 007ca340 __exit
 */

void FUN_006cb400(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_00462420();
  FUN_004652a0();
  FUN_007f3a72();
  FUN_007ec1f9();
  FUN_007ec67e(100);
  FUN_006cba70();
  cVar1 = FUN_006cbb70();
  if (cVar1 == '\0') {
    __exit(0);
  }
  if (1 < param_1) {
    iVar2 = FUN_00460d20(*(undefined4 *)(param_2 + 4),&DAT_008af5c8);
    if (iVar2 == 0) {
      DAT_00982c34 = 1;
      return;
    }
    iVar2 = FUN_00460d20(*(undefined4 *)(param_2 + 4),&DAT_008af5c4);
    if (iVar2 == 0) {
      DAT_008fad9c = 0;
    }
  }
  return;
}

