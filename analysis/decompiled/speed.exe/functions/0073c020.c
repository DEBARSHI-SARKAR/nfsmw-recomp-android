/* speed.exe 0073c020 FUN_0073c020; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0073c020(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = in_EAX * 0x14;
  iVar2 = (*(int *)(&DAT_009af388 + in_EAX * 0x14) - param_2) * unaff_EDI;
  *(int *)(&DAT_009af388 + iVar1) =
       *(int *)(&DAT_009af388 + in_EAX * 0x14) - ((int)(iVar2 + (iVar2 >> 0x1f & 0x3ffU)) >> 10);
  iVar2 = (*(int *)(&DAT_009af38c + iVar1) - param_3) * unaff_EDI;
  *(int *)(&DAT_009af38c + iVar1) =
       *(int *)(&DAT_009af38c + iVar1) - ((int)(iVar2 + (iVar2 >> 0x1f & 0x3ffU)) >> 10);
  iVar2 = (*(int *)(&DAT_009af390 + iVar1) - param_4) * unaff_EDI;
  *(int *)(&DAT_009af390 + iVar1) =
       *(int *)(&DAT_009af390 + iVar1) - ((int)(iVar2 + (iVar2 >> 0x1f & 0x3ffU)) >> 10);
  iVar2 = (*(int *)(&DAT_009af394 + iVar1) - param_5) * unaff_EDI;
  *(int *)(&DAT_009af394 + iVar1) =
       *(int *)(&DAT_009af394 + iVar1) - ((int)(iVar2 + (iVar2 >> 0x1f & 0x3ffU)) >> 10);
  return;
}

