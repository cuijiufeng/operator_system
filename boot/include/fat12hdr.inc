;2020��07��05�� 16:31:53
; ������ FAT12 ���̵�ͷ
;==================================================================================================

;----------------------------------------------------------------------------------------------------
nop
BS_OEMName:			DB 'ForrestY'		; OEM String, ���� 8 ���ֽ�
BPB_BytsPerSec:		DW 512				; ÿ�����ֽ���
BPB_SecPerClus:		DB 1				; ÿ�ض�������
BPB_RsvdSecCnt:		DW 1				; Boot ��¼ռ�ö�������
BPB_NumFATs:		DB 2				; ���ж��� FAT ��
BPB_RootEntCnt:		DW 224				; ��Ŀ¼�ļ������ֵ
BPB_TotSec16:		DW 2880				; �߼���������
BPB_Media:			DB 0xF0				; ý��������
BPB_FATSz16:		DW 9				; ÿFAT������
BPB_SecPerTrk:		DW 18				; ÿ�ŵ�������
BPB_NumHeads:		DW 2				; ��ͷ��(����)
BPB_HiddSec:		DD 0				; ����������
BPB_TotSec32:		DD 0				; ��� wTotalSectorCount �� 0 �����ֵ��¼������
BS_DrvNum:			DB 0				; �ж� 13 ����������
BS_Reserved1:		DB 0				; δʹ��
BS_BootSig:			DB 29h				; ��չ������� (29h)
BS_VolID:			DD 0				; �����к�
BS_VolLab:			DB 'Tinix0.01  '	; ����, ���� 11 ���ֽ�
BS_FileSysType:		DB 'FAT12   '		; �ļ�ϵͳ����, ���� 8���ֽ�
;----------------------------------------------------------------------------------------------------


;�����������ļ�����Ҫ�ĳ���ֵ 
;----------------------------------------------------------------------------------------------------
ROOT_DERCOTRY_START		equ		19				;��Ŀ¼��ʼ����
THE_SECTOR_FILE_COUNT	equ		16				;һ��������16���ļ���Ŀ������
CHARLENGTH_OF_FILE_NAME	equ		11				;�ļ����ֵ��ַ�����
DATA_SECTOR_START		equ		19+14-2			;�������Ŀ�ʼ������
FAT_SECTOR_START		equ		1				;FAT������ʼ������
;----------------------------------------------------------------------------------------------------