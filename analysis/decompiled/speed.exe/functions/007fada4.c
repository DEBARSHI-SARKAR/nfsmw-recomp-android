/* speed.exe 007fada4 FUN_007fada4; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007fada4(int *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *in_EAX;
  int iVar2;
  
  iVar2 = 8;
  do {
    *param_1 = ((uint)*in_EAX + param_2) * 0x10000;
    param_1[1] = ((uint)in_EAX[1] + param_2) * 0x10000;
    param_1[2] = ((uint)in_EAX[2] + param_2) * 0x10000;
    param_1[3] = ((uint)in_EAX[3] + param_2) * 0x10000;
    param_1[4] = ((uint)in_EAX[4] + param_2) * 0x10000;
    param_1[5] = ((uint)in_EAX[5] + param_2) * 0x10000;
    param_1[6] = ((uint)in_EAX[6] + param_2) * 0x10000;
    pbVar1 = in_EAX + 7;
    in_EAX = in_EAX + param_3;
    param_1[7] = ((uint)*pbVar1 + param_2) * 0x10000;
    param_1 = param_1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

