/* speed.exe 0072c5c0 FUN_0072c5c0; analysis pseudocode, not buildable source.
 * calls 0072b9c0 FUN_0072b9c0
 */

void FUN_0072c5c0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_009ab24c;
  if ((undefined4 **)DAT_009ab24c != &DAT_009ab24c) {
    while (puVar1[2] != param_1) {
      puVar1 = (undefined4 *)*puVar1;
      if ((undefined4 **)puVar1 == &DAT_009ab24c) {
        return;
      }
    }
    FUN_0072b9c0(param_2);
    *(undefined1 *)((int)&DAT_00902160 + (int)*(short *)(puVar1 + 3)) = 1;
    if ((char)param_2 != '\0') {
      *(byte *)((int)&DAT_00902160 + (int)*(short *)(puVar1 + 3)) =
           *(byte *)((int)&DAT_00902160 + (int)*(short *)(puVar1 + 3)) | 2;
    }
    if (*(char *)((int)puVar1 + 0x11) != '\0') {
      *(byte *)((int)&DAT_00902160 + (int)*(short *)(puVar1 + 3)) =
           *(byte *)((int)&DAT_00902160 + (int)*(short *)(puVar1 + 3)) | 4;
    }
  }
  return;
}

