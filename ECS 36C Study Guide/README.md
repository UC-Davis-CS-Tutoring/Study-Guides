# ECS 36C Study Guide

## Requirements

1. This study guide is developed using R Markdown. If you haven't used it
before, start by installing
[R Studio](https://www.rstudio.com/products/rstudio/download/).

2. Next, install [R Markdown](https://rmarkdown.rstudio.com/)
by typing the following on the R Console:

``` python
install.packages("rmarkdown")
```

3. The next thing you'd want to install is [Bookdown](https://bookdown.org/) -
an R-Markdown extension for authoring books. You can install
Bookdown by typing the following on the R Console:

``` python
install.packages("devtools")
devtools::install_github("rstudio/bookdown")
```

4. We also make use of [Pandoc](https://pandoc.org/installing.html)
and [Pandoc-citeproc](http://hackage.haskell.org/package/pandoc-citeproc)
to build our project.
If you are a Mac OS X user, you can install these tools by using the following
command on your terminal:

```
brew install pandoc
brew install pandoc-citeproc
```

5. The last thing you need is [TinyTeX](https://yihui.name/tinytex/),
a lightweight TeX platform. Since, we
will be using R Markdown, you can just install TinyTeX from your _R Console_ like
this:

``` python
install.packages(c('tinytex', 'rmarkdown'))
tinytex::install_tinytex()
```

## How to Contribute

1. Check that you have the above mentioned requirements.

2. Fork/Clone this repository.

3. Open this in R - Studio as a project. You can do so by simply clicking the
file `ECS 36C Study Guide.Rproj`.

4. Click the __Build Book__ button on the _Build_ pane (probably on the right
	side of your IDE). Based on the option you used, you either should see
	a fancy HTML - like page (called a _gitbook_), or you should see a
	PDF of the Study guide.

5. If you wish to add to a existing chapter, simply open any `.Rmd` file that
looks of the form `xx-chapter_name.Rmd` and start editing. Once you're done.
You can either hit the __Knit__ button to just compile that specific chapter,
or you could build the book entirely.

6. If you wish to create a new chapter, please name the file that has a form
like this: `xx-new_chapter.Rmd`. For example, if there are 3 chapters, and
you want to write a new chapter, say chapter 4, on Hash Tables, then create
the file like this: `04-hash_tables.Rmd`

7. __If you are not an organization member__, then submit a pull request,
and we'll approve it and merge it if we think its valuable. If you
belong to this organization, then simply push this code to the repository.

## The `_book` Directory

When you build your book using the __Build Book__ button, the book/pdf, is
built, compiled and stored in this directory. You should be able to see a
file named `"ECS 36C Study Guide.pdf` after you build the book.

## Resources for R-Markdown and Bookdown

* [Authoring Books with Bookdown](https://bookdown.org/yihui/bookdown/)
* [R Markdown: A Definitive Guide](https://bookdown.org/yihui/rmarkdown/)
