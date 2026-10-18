/* speed.exe 00819507 FUN_00819507; analysis pseudocode, not buildable source.
 */

void FUN_00819507(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)(param_1 + 0x294);
  bVar2 = (byte)*(undefined4 *)(param_1 + 0x7c);
  if (param_3 < 1) {
    param_3 = -(-param_3 >> (bVar2 & 0x1f));
  }
  else {
    param_3 = param_3 >> (bVar2 & 0x1f);
  }
  if (param_4 < 1) {
    param_4 = -(-param_4 >> (bVar2 & 0x1f));
  }
  else {
    param_4 = param_4 >> (bVar2 & 0x1f);
  }
  (*DAT_009c6808)((*(int *)(param_1 + 0x88) * param_4 - (*(int *)(param_1 + 0x74) * 2 + 2)) +
                  param_3 + param_2,iVar1,*(int *)(param_1 + 0x74),0x10);
  if ((-param_3 & 7U) != 0) {
    (*DAT_009c6aa8)(**(undefined4 **)(param_1 + 0x13c),(-param_3 & 7U) + 2 + iVar1,0x10);
  }
  if ((-param_4 & 7U) != 0) {
    (*DAT_009c6ab4)(**(undefined4 **)(param_1 + 0x13c),((-param_4 & 7U) + 2) * 0x10 + iVar1,0x10);
  }
  return;
}

