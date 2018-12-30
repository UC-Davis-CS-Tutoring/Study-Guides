.PHONY: StudyGuide.pdf all clean

all: StudyGuide.pdf

StudyGuide.pdf: StudyGuide.tex
	latexmk -pdf -pdflatex="pdflatex -interaction=nonstopmode" -use-make StudyGuide.tex

count:
	perl /home/matthew/apps/texcount.pl StudyGuide.tex

spell:
	aspell -c -t StudyGuide.tex -d en

clean:
	latexmk -CA
	rm -f *.log *.bbl *.blg *.fdb_latexmk *.fls *.xml *.aux
